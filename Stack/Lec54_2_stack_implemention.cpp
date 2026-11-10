#include<iostream>
#include<stack>
using namespace std;


class twostack{
    public:
    int top1;
    int top2;
    int *arr;
    int size;
    
    twostack(int s){
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }  


    // push into first stack
    void push1(int num){
        // atleast one empty space 
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }
    //pushing second stack

    void push2(int num){
        // having atleast one empty space 
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }

     // Pop from stack 1 and return popped element.
    int pop1() {
		if( top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
		if( top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

};

int main(){

    twostack st(5);

    st.push1(1);
    st.push1(2);
    st.push1(3);


    st.push2(4);
    st.push2(5);

   // cout << "Peek element :" << st.peek() << endl;
  // st.pop1();


    cout << "popped from the stack 1 : " << st.pop1() << endl;

    cout << "poopped from the stack 2 : " << st.pop2();


    return 0;







}

