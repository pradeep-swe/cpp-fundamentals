/*
Stack : A stack is an absract data type that follows the last-in first-out ( LIFO ) order. It provides
three primary functions ( push, pop ) and other optional behaviours such as ( isEmpty, size, peek and few 
others ). It is also a simplest of a type among other Data Types.

This program is supposed to teach a beginner friendly concepts of the implementation of *Stack* ADT using
*Vectors*. Vector based Stacks are less complicated than Array based stacks, given that, Vector behaves & 
behaves in a way the stack is supposed to behave. 

For Instance:
    - Vector automatically keeps track of the top of the Stack.
    - Functions like push, pop, peek, top, size, reserve, emplace are built-in feature of vector.
    - It's dynamic nature is built-in into the library itself.
*/

#include <iostream>
#include <vector>

// Vector based Stack Implementation
class Stack {
    private:
        std::vector<int> m_data {}; // Vector to store elements

        void optimizeStack() {
            m_data.reserve(100);
        }

    public:
        // Parameterized Constructor
        explicit Stack( std::vector<int> data ) 
            : m_data( data )
            { optimizeStack(); }
        
        // Default Constructor
        Stack() { optimizeStack(); };

        // Push function for stack
        void push( int data ) {
            m_data.push_back(data);
        }

        // Pop function for stack
        void pop() {
            if ( !m_data.empty() ) {
                m_data.pop_back();
            } else
                std::cout << "Stack is Empty";
        }

        // Return the index of the top element
        int top() const {
            if ( m_data.empty() ) {
                std::cout << "Warning! Stack is empty returning -1 : ";
                return -1;
            }
            else 
                return m_data.back();
        }

        // Check if the stack is empty.
        bool empty() const {
            return m_data.empty();
        }

        // Return the size of the stack
        size_t size() const {
            return m_data.size();
        }

        friend void printStack( const Stack& stack );
};

// Function to display stack elements
void printStack( const Stack& stack ) {
    for ( const auto& data : stack.m_data ) {
        std::cout << data << " ";
    }
    std::cout << std::endl;
}

int main() {
    Stack stack {};

    std::cout << std::boolalpha; // Returns names boolean value "true" or "false";
    std::cout << "\nIs Stack Empty : " << stack.empty() << std::endl; // Program crashes if not handled, 
    std::cout << "Stack Top : " << stack.top() << std::endl;
    std::cout << "Stack Size : " << stack.size() << std::endl;

    stack.push(2);
    std::cout << "\nCurrent Stack : ";
    printStack( stack );
    std::cout << "\nIs Stack Empty : " << stack.empty() << std::endl;
    std::cout << "Stack Top : " << stack.top() << std::endl;
    std::cout << "Stack Size : " << stack.size() << std::endl;

    stack.push(3);
    std::cout << "\nCurrent Stack : ";
    printStack( stack );
    std::cout << "\nIs Stack Empty : " << stack.empty() << std::endl;
    std::cout << "Stack Top : " << stack.top() << std::endl;
    std::cout << "Stack Size : " << stack.size() << std::endl;

    stack.push(10);
    std::cout << "\nCurrent Stack : ";
    printStack( stack );

    std::cout << "\nIs Stack Empty : " << stack.empty() << std::endl;
    std::cout << "Size : " << stack.size() << std::endl;
    std::cout << "Stack Top : " << stack.top() << std::endl;
}


/*
------------------------------------ ( NOTE ) ----------------------------------------------

- This is only supposed to be a beginner friendly version of implementation of stack
- This can be made robust by fortifying it with error handling 
- For a Intermediate learner, one can even opt for generic programming ( which C++
    is better optimized and made for ) by including class templates that handles varying
    vector types.
- Can inlcude runtime inputs for better user interaction


----------------------------------------- ( FAQ ) ------------------------------------------

0. Real World Analogies?
    0. Undo and Redo function in computers
    1. Function call stacks
    2. ...

1. Why create Stack when C++ provides in-built container adapters for Stack?
    - This is a learning phase, rather than just roting the stack library, its implementation
    shows one understands the stack's inner working and how it is works behind the hood. 
    though we used vector for this implementation, which does not quite explain the inner
    working, it gives an idea of how things are supposed to be working.

2. Why the need for optimizeStack()?
    - This is to deal with expensive vector reallocations, at least for the few elements.
        It ultimately has to reallocate memory if the user was to input 101 elements.
        This depends on the use case of the stack
    
3. Why reallocation is expensive()?
    - Reallocation goes through four-step process:
        0.  Search for chunk of memory greater than currently allocated
        1.  Copy elements to the newly allocated space
        2.  Destroy and release the old space
        3.  Update the pointer to the begin of the newly allocated chunk
    thereby, as the size of the data grows, this very steps keep on going when required,
    ultimately preformance is compromized.  

4. What is the "const" suffix after a function name?
    - Eg: bool isEmpty() const { ... }
    - this promises the compiler that we will only read the content not modify it 

5. Why pass the stack object by "const ref"?
    0. First why ref ( reference )
        - For now it doesn't matter whether we pass by ref or not, but as the program grows 
        enormously it would be a hefty amount of work to copy data when passed by value, which
        again compromizes performance
    
    1. why const ?
        - Same as previous, cause: we prmise we won't modify the contents.


------------------------------------------( Disclaimer ) ----------------------------------------------

All of the above are personal understandings. Since I, too, am learning - programs and answers could be imcomplete
or may need polish. At the end of the day, we are all learning new things each day.

*/
