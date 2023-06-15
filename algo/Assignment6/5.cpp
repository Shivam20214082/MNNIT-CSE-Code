#include <bits/stdc++.h>
using namespace std;

// A Huffman tree node
struct MinHeapNode
{
    char data;
    unsigned freq;
    MinHeapNode *left, *right;

    MinHeapNode(char data, unsigned freq)

    {

        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

struct compare
{

    bool operator()(MinHeapNode *l, MinHeapNode *r)

    {
        return (l->freq > r->freq);
    }
};

void printCodes(struct MinHeapNode *root, string str)
{

    if (!root)
        return;

    if (root->data != '$')
        cout << root->data << ": " << str << "\n";

    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

void HuffmanCodes(vector<char> data, vector<int> freq, int size)
{
    struct MinHeapNode *left, *right, *top;

    priority_queue<MinHeapNode *, vector<MinHeapNode *>, compare> minHeap;

    for (int i = 0; i < size; ++i)
        minHeap.push(new MinHeapNode(data[i], freq[i]));
    while (minHeap.size() != 1)
    {

        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        top = new MinHeapNode('$', left->freq + right->freq);

        top->left = left;
        top->right = right;

        minHeap.push(top);
    }
    printCodes(minHeap.top(), "");
}

int main()
{
    vector<int> freq;
    vector<char> arr;
    int n;
    cout << "enter the total number of unique letter" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << (i + 1) << "th letter and its length -> ";
        int x;
        char y;
        cin >> y >> x;
        arr.push_back(y);
        freq.push_back(x);
    }

    int size = arr.size();

    HuffmanCodes(arr, freq, size);

    return 0;
}

// output
/*
enter the total number of unique letter
5
enter 1th letter and its length -> a 50
enter 2th letter and its length -> b 30
enter 3th letter and its length -> y 20
enter 4th letter and its length -> c 10
enter 5th letter and its length -> q 20
q: 00
b: 01
c: 100
y: 101
a: 11
*/
