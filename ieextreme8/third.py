import sys

memory = []

def print_mem(loc):
   return memory[ loc ]
   
def print_(orders):
   inp = orders[1].split(',')
   if len(inp) == 1:
      return print_mem(int(inp[0],16))
   else:
      str = ""
      for i in range(int(inp[0],16) , int(inp[1],16)+1):
         str += print_mem(i) + " "
      return str

def move_const(orders):
   inp = orders[1].split(',')
   memory[ int(inp[1],16) ] = inp[0][1:]

def move_address(orders):
   inp = orders[1].split(',')
   memory[ int(inp[1],16) ] = memory[ int(inp[0],16) ]

def get_location(string):
   if string[0] == '(':
      return string[1:len(string)-1]
   else:
      return string

def move_deref(orders):
   inp = orders[1].split(',')
   memory[ int(get_location(inp[1]),16) ] = memory[ int(get_location(inp[0]),16) ]

def move_(orders):
   inp = orders[1].split(',')
   if inp[0][0] == '#':
      move_const(orders)
   else:
      move_deref(orders)

def add_constant(orders):
   inp = orders[1].split(',')
   memory[ int(inp[1],16) ] = hex(int(inp[0][1:],16) + int( memory[ int(inp[1],16) ]))

def add_registers(orders):
   inp = orders[1].split(',')
   string = hex( int( memory[ int(inp[0],16) ],16) + int( memory[ int(inp[1],16) ],16))
   memory[ int(inp[1],16) ] = string[len(string)-2:].upper()

def add_(orders):
   inp = orders[1].split(',')
   if inp[0][0] == '#':
      add_constant(orders)
   else:
      add_registers(orders)


def sub_constant(orders):
   inp = orders[1].split(',')
   memory[ int(inp[1],16) ] = hex(int(inp[0][1:],16) - int( memory[ int(inp[1],16) ]))

def sub_registers(orders):
   inp = orders[1].split(',')
   string = hex( int( memory[ int(inp[0],16) ],16) - int( memory[ int(inp[1],16) ],16))
   memory[ int(inp[1],16) ] = string[len(string)-2:].upper()

def sub_(orders):
   inp = orders[1].split(',')
   if inp[0][0] == '#':
      add_constant(orders)
   else:
      add_registers(orders)


def or_constant(orders):
   inp = orders[1].split(',')
   memory[ int(inp[1],16) ] = hex(int(inp[0][1:],16) | int( memory[ int(inp[1],16) ]))

def or_registers(orders):
   inp = orders[1].split(',')
   string = hex( int( memory[ int(inp[0],16) ],16) | int( memory[ int(inp[1],16) ],16))
   memory[ int(inp[1],16) ] = string[len(string)-2:].upper()

def or_(orders):
   inp = orders[1].split(',')
   if inp[0][0] == '#':
      add_constant(orders)
   else:
      add_registers(orders)  
      
def xor_constant(orders):
   inp = orders[1].split(',')
   memory[ int(inp[1],16) ] = hex(int(inp[0][1:],16) ^ int( memory[ int(inp[1],16) ]))

def xor_registers(orders):
   inp = orders[1].split(',')
   string = hex( int( memory[ int(inp[0],16) ],16) ^ int( memory[ int(inp[1],16) ],16))
   memory[ int(inp[1],16) ] = string[len(string)-2:].upper()

def xor_(orders):
   inp = orders[1].split(',')
   if inp[0][0] == '#':
      add_constant(orders)
   else:
      add_registers(orders)   



size = int(raw_input(), 16)

for i in range(size+1):
   memory.append("00")


for sL in sys.stdin.readlines(): 
   inp = sL.split()

   if inp[0] == "PRINT":
      print print_(inp)
   elif inp[0] == "MOVE":
      move_(inp)
   elif inp[0] == "ADD":
      add_(inp)
   elif inp[0] == "SUB":
      sub_(inp)
   elif inp[0] == "OR":
      or_(inp)
   elif inp[0] == "XOR":
      xor_(inp)
   
