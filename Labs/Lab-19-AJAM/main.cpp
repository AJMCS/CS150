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
    static int forest = 0;

    forest += numberOfTrees;
    
    for(int i = 0; i < numberOfTrees; i++)
    {
        treeTop();
        treeTrunk(treeHeight);

        cout << endl << endl;
    }
    
    cout << "There are currently " << forest << " trees in the forest." << endl << endl;
}


int main()
{
    int treeHeight = 0;
    int numberOfTrees = 0;
    char exit = ' ';

    do 
    {
        cout << "Please enter the tree height: " << endl;
        cin >> treeHeight;

        cout << "Please enter the number of trees: " << endl;
        cin >> numberOfTrees;

        drawTrees(treeHeight, numberOfTrees);

        cout << "Do you want more trees? (Y/N) " << endl;

        do 
        {
            cin >> exit;
            exit = toupper(exit);
            cout << endl;

            if (exit != 'Y' && exit != 'N') 
            {
                cout << "Invalid entry: Please enter either 'Y' for yes or 'N' for no."
                 << endl;
            }

        } while (exit != 'Y' && exit != 'N');
        
    }while (exit == 'Y');
    
}