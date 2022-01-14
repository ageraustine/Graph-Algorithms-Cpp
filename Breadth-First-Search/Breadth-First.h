#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>

class BreadthFirst{
    private:
        static int numnodes;
        set<string> processed;
        map<string,string []> directedGraph;
        string source;
        string destination;
        queue<string> neigbors;
    public:
        BreadthFirst(map<string,string []> graph,string src,string dest){
            directedGraph = graph;
            source = src;
            dest = destination;
        };
        bool HasPath(){
            neigbors = graph[source];
            
            string current = neigbors.pop();
            
            while(neigbors.empty() == false){
                if(current == dest){
                    return true;
                }
                for(auto i = 0; i<graph[current].size(); i++){
                    neigbors.push_back(graph[current][i]);
                }
            }
            return false;
        };
        set<string> ShortestPath(){
            bool isPath = HasPath(directedGraph,source,destination);
            if(isPath == false){
               
            }
        }    
}