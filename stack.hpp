class Stack{

	private:
	int m_index;
	int *m_array;
	int m_size;

	public:
	//Constructor with the parameter <size>
	Stack(int size);
	//Default constructor
	Stack();
	//Destructor
	~Stack();

	//Returns the size of the stack
	int get_size();
	//Checking the emptiness of the stack
	bool is_empty();
	//Checking the completeness of the stack
	bool is_full();
	//From one stack creates another stack and deletes the first
	void copy_array(int *array, int *new_array);
	//Returns the current value of the <m_index> variable
	int get_mIndex();
	//Adds an element to the stack
	void push(int data);
	//Returns the last element added to the stack
	int top();
	//Removed the last added element from the stack
	void pop();
	//Prints an elements of stack
	void print();

};
