from operator import methodcaller



'''
nodes = ('A', 'B', 'C', 'D', 'E', 'F', 'G')
distances = {
    'B': {'A': 5, 'D': 1, 'G': 2},
    'A': {'B': 5, 'D': 3, 'E': 12, 'F' :5},
    'D': {'B': 1, 'G': 1, 'E': 1, 'A': 3},
    'G': {'B': 2, 'D': 1, 'C': 2},
    'C': {'G': 2, 'E': 1, 'F': 16},
    'E': {'A': 12, 'D': 1, 'C': 1, 'F': 2},
    'F': {'A': 5, 'E': 2, 'C': 16}}

'''

nodes = list(range(100))

t = int(raw_input())
for i in range(t):

	distances = {}
	
	for i in range(99):
		distances[i] = {i+1 : 1}
	
	snakes, ladders = map(int, raw_input().split(','))
	
	l = map( methodcaller("split", ",") ,raw_input().split())
	for i in range(len(l)):
		distances[int(l[i][0])][int(l[i][1])] = 0
		
	l = map( methodcaller("split", ",") ,raw_input().split())
	for i in range(len(l)):
		distances[int(l[i][0])][int(l[i][1])] = 0

	distances[99] = {}

	unvisited = {node: None for node in nodes} #using None as +inf
	visited = {}
	current = 0
	currentDistance = 0
	unvisited[current] = currentDistance

	while True:
		for neighbour, distance in distances[current].items():
			if neighbour not in unvisited: continue
			newDistance = currentDistance + distance
			if unvisited[neighbour] is None or unvisited[neighbour] > newDistance:
				unvisited[neighbour] = newDistance
		visited[current] = currentDistance
		del unvisited[current]
		if not unvisited: break
		candidates = [node for node in unvisited.items() if node[1]]
		current, currentDistance = sorted(candidates, key = lambda x: x[1])[0]

	if visited[99] % 6 == 0:
		print visited[99] / 6
	else:
		print visited[99] / 6 + 1