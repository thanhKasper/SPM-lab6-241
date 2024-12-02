template <class T>
class Node {
private:
  T data;
  Node* next;
};

template <class T>
class ILinkedList {
private:
  Node<T>* head;
  Node<T>* tail;
  int size

public: 
  public ILinkedList() = 0;
  public ~ILinkedList() = 0;

  public void add(T data) = 0;
  public void remove(T data) = 0;
  public void print() = 0;
  public void clear() = 0;
  public void size() = 0;
  public void get(int idx) = 0;

  public T removeAt(int idx) = 0;
};

template <class T>
class LinkedList : public ILinkedList<T> {
public:
  LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
  }

  ~LinkedList() {
    clear();
  }

  void add(T data) {
    Node<T>* newNode = new Node<T>();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }

    size++;
  }

  
};