/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package as;

/**
 *
 * @author ugur
 */
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Engine engine = new Engine();

        try {
            engine.oldMain();
        } catch (Exception e) {
            System.out.println("No Route Available from " + engine.getStartPoint() + " to " + engine.getEndPoint());
        }

    }
}

class CompareVertex implements Comparator<Vertex> {

    public int compare(Vertex o1, Vertex o2) {

        if (o1.getDistance() < o2.getDistance()) {
            return -1;
        } else if (o1.getDistance() > o2.getDistance()) {
            return 1;
        } else {
            return 0;
        }
    }
}

class Edge {

    private String start;
    private String end;
    private int distance;

    public int getDistance() {
        return distance;
    }

    public void setDistance(int distance) {
        this.distance = distance;
    }

    public String getEnd() {
        return end;
    }

    public void setEnd(String end) {
        this.end = end;
    }

    public String getStart() {
        return start;
    }

    public void setStart(String start) {
        this.start = start;
    }

    public Edge(String start, String end, int distance) {
        this.start = start;
        this.end = end;
        this.distance = distance;
    }
}

class Vertex {

    private String name;
    private int distance;
    private String path;

    public int getDistance() {
        return distance;
    }

    public void setDistance(int distance) {
        this.distance = distance;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPath() {
        return path;
    }

    public void setPath(String path) {
        this.path = path;
    }

    public Vertex(String name) {
        this.name = name;
        this.distance = Integer.MAX_VALUE;
        this.path = "";
    }
}

class Graph {

    private List<Vertex> vertexList;
    private List<Edge> edgeList;

    public List<Edge> getEdgeFromStart(Vertex v) {

        ArrayList<Edge> returnValue = new ArrayList<Edge>();

        for (Edge e : edgeList) {
            if (e.getStart().equals(v.getName())) {
                returnValue.add(e);
            }
        }

        return returnValue;
    }

    public static Graph removeVertex(Graph graph, Vertex v) {

        Graph returnGraph = new Graph();

        List<Vertex> vertexList = new ArrayList<Vertex>();
        List<Edge> edgeList = new ArrayList<Edge>();

        for (Edge edge : graph.getEdgeList()) {
            if (!edge.getStart().equals(v.getName())) {
                edgeList.add(new Edge(edge.getStart(), edge.getEnd(), edge.getDistance()));
            }
        }

        for (Vertex vertek : graph.getVertexList()) {
            if (!vertek.getName().equals(v.getName())) {
                vertexList.add(new Vertex(v.getName()));
            }
        }

        returnGraph.setEdgeList(edgeList);
        returnGraph.setVertexList(vertexList);

        return returnGraph;
    }

    public List<Edge> getEdgeList() {
        return edgeList;
    }

    public Vertex getVertex(String name) {
        for (Vertex v : vertexList) {
            if (v.getName().equals(name)) {
                return v;
            }
        }
        return null;
    }

    public List<Vertex> getVertexList() {
        return vertexList;
    }

    public void setEdgeList(List<Edge> edgeList) {
        this.edgeList = edgeList;
    }

    public void setVertexList(List<Vertex> vertexList) {
        this.vertexList = vertexList;
    }
}

class Engine {

    private static final int MAX_QUEUE_SIZE = 100;
    private int vertexNumber;
    private int edgeNumber;
    private List<Vertex> vertexList;
    private List<Edge> edgeList;
    private String startPoint;
    private String endPoint;
    private PriorityQueue<Vertex> priorityQueue;
    private Graph graph;
    private Vertex endVertex;

    public Engine() {
        vertexList = new ArrayList<Vertex>();
        edgeList = new ArrayList<Edge>();

        Comparator c = new CompareVertex();

        priorityQueue = new PriorityQueue<Vertex>(MAX_QUEUE_SIZE, c);

        graph = new Graph();
    }

    public int numberOfPath(Graph graph, Vertex start, Vertex end) {
        if (start.getName().equals(end.getName())) {
            return 1;
        } else {
            List<Edge> edges = graph.getEdgeFromStart(start);
            int i = 0;
            for (Edge edge : edges) {
                i = i + numberOfPath(Graph.removeVertex(graph, start), new Vertex(edge.getEnd()), end);
            }
            return i;
        }
    }

    public void oldMain() {

        Engine engine = new Engine();

        // engine.readFromFile("graph.txt");
        engine.readInput();

        // System.out.println( engine.numberOfPath(engine.getGraph(), new Vertex(engine.getStartPoint()), new Vertex(engine.getEndPoint())) );

        int routeNumber = engine.numberOfPath(engine.getGraph(), new Vertex(engine.getStartPoint()), new Vertex(engine.getEndPoint()));

        if (routeNumber > 0) {

            System.out.println("Total Routes: " + engine.numberOfPath(engine.getGraph(), new Vertex(engine.getStartPoint()), new Vertex(engine.getEndPoint())));

            engine.calculate();

            // System.out.println(engine.getShortestDistance());
            System.out.println("Shortest Route Length: " + engine.getShortestDistance());

            //System.out.println(engine.getShortestPath());

            System.out.print("Shortest Route after Sorting of Routes of length " + engine.getShortestDistance() + ": ");

            for (char c : engine.getShortestPath().toCharArray()) {
                System.out.print(c + " ");
            }

        } else {
            System.out.println("No Route Available from " + engine.getStartPoint() + " to " + engine.getEndPoint());
        }


    }

    public static int getMAX_QUEUE_SIZE() {
        return MAX_QUEUE_SIZE;
    }

    public int getVertexNumber() {
        return vertexNumber;
    }

    public int getEdgeNumber() {
        return edgeNumber;
    }

    public List<Vertex> getVertexList() {
        return vertexList;
    }

    public List<Edge> getEdgeList() {
        return edgeList;
    }

    public String getStartPoint() {
        return startPoint;
    }

    public String getEndPoint() {
        return endPoint;
    }

    public PriorityQueue<Vertex> getPriorityQueue() {
        return priorityQueue;
    }

    public Graph getGraph() {
        return graph;
    }

    public Vertex getEndVertex() {
        return endVertex;
    }

    private void readInput() {
        Scanner scanner;

        try {
            scanner = new Scanner(System.in);

            endPoint = scanner.next();

            startPoint = scanner.next();
            String second = scanner.next();

            edgeList.add(new Edge(startPoint, second, 1));
            edgeList.add(new Edge(second, startPoint, 1));

            while (true) {

                String start = scanner.next();
                String end = scanner.next();

                if (start.equals(end)) {
                    break;
                }

                edgeList.add(new Edge(start, end, 1));
                edgeList.add(new Edge(end, start, 1));
            }

            for (Edge e : edgeList) {
                Vertex start = new Vertex(e.getStart());
                Vertex end = new Vertex(e.getEnd());

                if (!vertexList.contains(start)) {
                    vertexList.add(start);
                }

                if (!vertexList.contains(end)) {
                    vertexList.add(end);
                }

            }

            graph.setEdgeList(edgeList);
            graph.setVertexList(vertexList);


        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private int getShortestDistance() {
        return endVertex.getDistance() + 1;
    }

    private String getShortestPath() {

        StringBuilder buf = new StringBuilder();

        buf.append(endPoint);

        String last = endVertex.getPath();

        while (!last.equals(startPoint)) {
            buf.append(last);
            last = getPath(last);
        }

        buf.append(last);

        buf.reverse();


        return buf.toString();
    }

    private void calculate() {

        Vertex peak = null;

        initialize();



        while (!priorityQueue.isEmpty()) {

            peak = priorityQueue.poll();
            if (peak.getName().equals(endPoint)) {
                endVertex = peak;
                break;
            }

            List<Edge> neigboorsPath = graph.getEdgeFromStart(peak);
            for (Edge e : neigboorsPath) {
                update(e, peak.getDistance());
            }

        }

        endVertex = peak;

    }

    private void update(Edge e, int distance) {

        Vertex v = graph.getVertex(e.getEnd());
        if (v.getDistance() >= distance + e.getDistance()) {
            priorityQueue.remove(v);
            v.setDistance(distance + e.getDistance());
            v.setPath(e.getStart());
            priorityQueue.add(v);
        }

    }

    private String getPath(String last) {

        for (Vertex v : vertexList) {
            if (v.getName().equals(last)) {
                return v.getPath();
            }
        }

        return null;

    }

    private void initialize() {
        for (Vertex v : graph.getVertexList()) {
            priorityQueue.add(v);
        }

        Vertex start = graph.getVertex(startPoint);
        priorityQueue.remove(start);
        start.setDistance(0);

        priorityQueue.add(start);
    }
}