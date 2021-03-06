#include <stdio>
#include <queue>
#include <map>
#include <string>
#include <list>
#include <limits>
using namespace std;

class Dijkstras{
    private:
       map<string,map<int,string>>  directedGraph;
       map<string,list<string>> parents;
       map<int,string> costs;
       queue<string> path;
       list<string> processed;
       string source;
       string destination;
       string node; 

    public:
        Dijkstras(map<string,map<int,string> graph, string start, string end){
            source = start;
            destination = end;
            directedGraph = graph;
        }
        queue<string> computeShortestPath(){
            string current = source;
            costs = directedGraph[current];
            for(const auto & i[key,value]: parents){
                while(!isProcessed(current)){
                   node = computeCheapestNode(costs);
                   path.push_back(node);
                   processed.push(current);
                   current = node;
                }
            } 
            return result;
        }
        bool isProcessed(string graphNode){
               for(auto i = 0; i<processed.size();i++){
                   if(graphNode == processed[i]){
                       return true
                   }
               }
               return false;
        }
        string computeCheapestNode(map<int,string> graphcosts){
            unsigned double nodeval =  numeric_limits<double>::infinity();
            int index;
            for(const auto& i [key,value]: graphcosts){
                index += 1;
                if(key<nodeval){
                    nodeval = value;
                };
            };
            return costs[index];
        }
}