#include <iostream>

using namespace std;

void treeTop()
{
    cout << "    ^"      << endl;
    cout << "   / \\ "    << endl; 
    cout << "  /   \\ "   << endl;
    cout << " /     \\ "  << endl;
    cout << "/_______\\ " << endl;
}


void treeTrunk(int size)
{
    for(int i = 0; i < size; i++)
        {
            cout << "  |  |  " << endl;
        }
}


void drawTrees(int treeHeight, int numberOfTrees)
{
    for(int i = 0; i < numberOfTrees; i++)
    {
        treeTop();
        treeTrunk(treeHeight);

        cout << endl << endl;
    }
}


int main()
{
    int treeHeight = 0;
    int numberOfTrees = 0;

    
    cout << "Please enter the tree height: " << endl;
    cin >> treeHeight;

    cout << "Please enter the number of trees: " << endl;
    cin >> numberOfTrees;

    drawTrees(treeHeight, numberOfTrees);
}