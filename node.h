template <class T>
struct chainNode
{
    T element;
    chainNode<T> *next;

    chainNode() {}
    chainNode(const T& element)
    {
        this->element = element;
    }
    chainNode(const T& element, chainNode<T>* next)
    {
        this->element = element;
        this->next = next;
    }
};

template <class T>
struct BTreeNode
{
    T element;
    BTreeNode<T> *leftChild;
    BTreeNode<T> *rightChild;

    BTreeNode() { this->leftChild = this->rightChild = NULL; }
    BTreeNode(const T &theElement)
    {
        this->element = theElement;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
    BTreeNode(const T &theElement,
            BTreeNode *leftChild,
            BTreeNode *rightChild)
    {
        this->element = theElement;
        this->leftChild = leftChild;
        this->rightChild = rightChild;
    }
};
