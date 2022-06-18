#include "Tree.h"
int main() {
    int ch, y = 0;
    Tree obj;
    do
    {
        cout << "\n\t RED BLACK TREE ";
        cout << "\n 1. Insert in the tree ";
        cout << "\n 2. Delete a node from the tree";
        cout << "\n 3. Search for an element in the tree";
        cout << "\n 4. Display the tree ";
        cout << "\n 5. Exit ";
        cout << "\nEnter Your Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: 
            cout << "\nEnter key of the node to be inserted: ";
            int z;
            cin >> z;
            obj.insert(z);
            cout << "\nNode Inserted.\n";
            break;
        case 2: obj.del();
            break;
        case 3: 
            int x;
            cout << "\n Enter key of the node to be searched: ";
            cin >> x;
            obj.search(x);
            break;
        case 4: obj.disp();
            break;
        case 5: y = 1;
            break;
        default: cout << "\nEnter a Valid Choice.";
        }
        cout << endl;

    } while (y != 1);
    return 1;
}
