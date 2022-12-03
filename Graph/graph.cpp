#include "graph.h"

vector<vector<int>> take_input()
{
    int no_of_vertex;
    int no_edges;
    vector<vector<int>> adj_list;
    vector<int> temp;

    cout << "Enter the number of vertices: ";
    cin >> no_of_vertex;

    cout << "Enter the number of edges: ";
    cin >> no_edges;

    for (int i = 0; i < no_of_vertex + 1; i++)
    {
        adj_list.push_back(temp);
    }

    for (int i = 1; i <= no_edges; i++)
    {
        int source, dest;

        cout << "For Edge " << i << endl;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> dest;

        adj_list[source].push_back(dest);
        adj_list[dest].push_back(source);
    }

    return adj_list;
}

void display(vector<vector<int>> adj_list)
{
    for (int i = 0; i < adj_list.size(); i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
}