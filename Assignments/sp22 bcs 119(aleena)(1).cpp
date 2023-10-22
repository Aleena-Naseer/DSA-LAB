//Program 01:
  #include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 5, num2 = 10;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 <<endl;
    swap(&num1, &num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 <<endl;
    return 0;
}


//program 02:
int main() {
    int arr[] = {10, 5, 7, 20, 15};
    int *ptr = arr;
    int max = *ptr;
    
    for (int i = 0; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    cout << "Maximum element in the array: " << max << std::endl;
    return 0;
}


//program 03:
void reverseString(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char str[] = "Hello, World!";
    cout << "Original string: " << str << endl;
    reverseString(str);
    cout << "Reversed string: " << str << endl;
return 0;
}

//program 04:
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of elements in the array: %d\n", sum);
    return 0;
}

//program 05:
void displayArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Array elements: ";
    displayArray(arr, size);
    return 0;
}


//program 06:
int main() {
    int *arr;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = 5;
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    } 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }  
    printf("Elements entered by the user: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}


//program 07:
class Rectangle {
public:
    int length;
    int width;
    Rectangle(int l, int w) : length(l), width(w) {}
    int area() {
        return length * width;
    }
};
int main() {
    Rectangle r(5, 3);
    Rectangle *ptr = &r;  
    cout << "Area of the rectangle: " << ptr->area() << std::endl;  
    return 0;
}


//program 08:
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int (*ptr)(int, int);
    ptr = add;
    int result = ptr(5, 3);
    cout << "Result of addition: " << result << std::endl;
    ptr = subtract;
    result = ptr(5, 3);
    cout << "Result of subtraction: " << result << std::endl;
    return 0;
}


//program 09:
int main() {
    int num = 42;
    int *ptr = &num;
    int **ptr2 = &ptr;
    
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value of num using single pointer: " << *ptr << std::endl;
    std::cout << "Value of num using double pointer: " << **ptr2 << std::endl;
   
    return 0;
}


//program 10:
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
    cout << *ptr << " ";
        ptr++;
    }
    cout << std::endl;
    return 0;
}


//program 11:
void modifyValue(int *x) {
    (*x) += 5;
}
int main() {
    int num = 10;
    cout << "Original value of num: " << num << std::endl;
    modifyValue(&num);
    cout << "Modified value of num: " << num << std::endl;
    return 0;
}


//program 12:
include <iostream>

int main() {
    int num = 42;
    const int constNum = 20;
    
    int *ptr1 = &num;               // Pointer to non-const
    const int *ptr2 = &constNum;    // Pointer to const
    int const *ptr3 = &num;         // Pointer to const
    const int *const ptr4 = &constNum; // Constant pointer to const
    
    std::cout << "Value through ptr1: " << *ptr1 << std::endl;
    std::cout << "Value through ptr2: " << *ptr2 << std::endl;
    std::cout << "Value through ptr3: " << *ptr3 << std::endl;
    std::cout << "Value through ptr4: " << *ptr4 << std::endl;
    return 0;
}


//program 13:
int main() {
    const int num = 42;
    const int *ptr = &num; // Pointer to constant data
    
    std::cout << "Value through ptr: " << *ptr << std::endl;
    
    // Attempting to modify the value through the pointer will result in an error:
    // *ptr = 50; // Error
    
    return 0;
}


//program 14:
int* createArray(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }
    return arr;
}
int main() {
    int* arr;
    int size = 5;
    arr = createArray(size);
    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr; 
    return 0;
}


//program 15:
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Array elements before modification: ";
    printArray(arr, size);
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        (*ptr) *= 2;
        ptr++;
    } 
    cout << "Array elements after modification: ";
    printArray(arr, size);
    return 0;
}








