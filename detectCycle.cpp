//check cycle in directed graph
//dfs is used
#include<iostream>
using namespace std;
//write graph class here
bool iscycleutil(int i, bool visited[],bool restack[],vector<int>adj[])
{if(visited[i]==false)//if false then go inside
{ visited[i]=true;//make true
 restack[i]=true;
 
    for(int v:adj[i])//check all adjacent node of node in restack
    {if(!visited[v] && iscycleutil(v,visited,restack,adj))//if it is not visited and have cycle
 return true;
    else if(restack[v])//else if it is visited and inside stack
     return true;
    }
}
    restack[i]=false;//backtrack and make it again false
    return false;
}
	bool isCyclic(int V, vector<int> adj[]) {
	  //we will need two boolen array
	 bool visited[V];//to check visited node
	  bool restack[V];//to check node in stack
	  for(int i=0;i<V;i++)//mark both array as false
	  {visited[i]=false;
	      restack[i]=false;
	  }
	  for(int i=0;i<V;i++)
	  {if(iscycleutil(i,visited,restack,adj))//check cycle for every node
	      return true;
	  }
	  return false;//else return false
	}
};
