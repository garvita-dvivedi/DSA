#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

//Q1(pivot element in roated array)
//sorted roated array and square root using binary search : pending
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
//Q2(book allocation , also same approach for painter's partition problem)
bool isPossible(int arr[],int books,int member,int mid){
    int studentCount=1;
    int pagesum=0;
    for(int i=0;i<books;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>member || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int allocatedBooks(int arr[],int books,int member){
    int s=0;
    int sum=0;
    for(int i=0;i<books;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
     int mid=s+(e-s)/2;
     while(s<=e){
        if(isPossible(arr,books,member,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
         mid=s+(e-s)/2;
     }
     return s;
}
 //(aggressive cows:pending)
 //Q3
 int selectionSort(int arr[],int size)
 //vector instead of normal function here
 {
for(int i=0;i<size-1;i++){
    int minIndex=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[minIndex])
            minIndex=j;
    }
    swap(arr[minIndex],arr[i]);
}
 }
 //Q4(bubble sort)
 //use vector 
 int bubbleSort(int arr[],int size){
    for(int i=1;i<size;i++){
        bool swapped=false;
        for(int j=0;j<size-i;j++){
   if(arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);
    swapped=true;
       }
        }
        if(swapped==false){ 
        break;}   
    }
 }
 //Q5(insertion sort)
 int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i+1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
 }

 //Q6
 vector <int>reverseArray(vector<int>v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
 }
 void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }

 //Q7
 /*
 void merge(int arr1[],int n , int arr2[],int m, int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
 }
 void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 }*/
 
 //Q8
 /*void moveZeros(vector<int>&nums){
    int nonZero=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[nonZero]);
        }
    }
 }

void print (int arr[],int n){
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }*/

//Q9
/*int getLength(char name[]){
    int length=0 ;
    for(int i=0;name[i]!='\0';i++){
        length++;
    }
    return length;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
 char toLowerCase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
 }
bool checkPalindrome(char a[],int n)
{
    int s=0;
    int e= n-1;
    while(s<e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

//2D aRRAYS

bool isPresent (int arr[][4],int target , int row,int col){
    for(int row=0;row<3;row++){
     for(int col=0;col<4;col++){
        if(arr[row][col]==target){
            return 1;
        }
     }
}
return 0;
}

void printSum (int arr[][4],int row , int col){
  cout<<"Sum is:"<<endl;
    for(int row=0;row<3;row++){
          int temp =0;
        for(int col=0;col<4;col++){
           temp +=arr[row][col];
        }
        cout<<temp<<" ";
    }
}
int largestRowSum(int arr[][4],int row,int col){
    int maxi=INT16_MIN;
    int rowIndex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(col=0;col<4;col++){
           sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"the maximum sum is :"<<maxi<<endl;
    return  rowIndex;
}*/

//  GCD (Greatest common divisor)
/*
int gcd(int a, int b){
    if(a==0)
        return b;
    if(b==0)
    return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

//POINTERS I FUNCTIONS 
void print(int *p){
    cout<<p<<endl;
}
void update (int *p){
    p=p+1;
    cout<<"Inside:"<<p<<endl;
    *p=*p+1;
    cout<<"new:"<<*p<<endl;

}
int getsum(int *arr,int n){
    //here array in input is by default taken in pointer ..if we writearr[] it will work same
    //by using pointer array we can work upon part of array
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
//DOUBLE POINTERS

void update(int **ptr2){
    //ptr2=ptr2+1; value does not change in main 
    //or
  // *ptr2=*ptr2+1; value change in main 
    //or
   //**ptr2=**ptr2+1; value change in main 
}
//PASS BY REFERENCE (no copy is created unlike in pass by value ..the memory location is same and we have given a reference name to it)

void update(int &n){
    n++;
}
//DYNAMIC MEMORY ALLOCATION
int getSum(int *arr,int n)  {
    int sum=0;
    for(int i=0;i<n;i++){
  sum+=arr[i];
}
return sum;
}

//RECURSSION

void reachHome(int start,int end){
    cout<< "Source"<<start <<"destination"<< end <<endl;
     if(start == end){
        cout<<"reached"<<endl;
        return ;
     }
     start++;
     reachHome(start,end);
}

//Q
void sayDigit(int n,string arr[]){
    if(n==0)
    return ;
    int digit=n%10;
    n=n/10;
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
//Q
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
       bool remainingPart= isSorted(arr+1,size-1);
       return remainingPart;
    }
}

//Q (sum of array)
int sum(int *arr ,int size){
     if(size==0){
        return 0;
     }
     if(size==1){
         return arr[0];
     }
        int ans  = sum(arr+1,size-1);
        int s=arr[0]+ans;
        return s;  
}

//Q(linear search using recursion)
bool linaerSearch(int arr[],int size,int key){
     if(size==0){
        return false;
     }
     if(arr[0]==key){
        return true;
     }
     else{
        int rest=linaerSearch(arr+1,size-1,key);
        return rest;
     }
}

//Q(binary search using recursion)
bool binarySearch(int arr[],int start,int end,int key){
    if(start>end){
        return false;
    }
    int mid = start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        int ans=binarySearch(arr,mid+1,end,key);
        return ans;
    }
    else{
        int ans=binarySearch(arr,start,mid-1,key);
        return ans;
    }
}

//Q(reverse a string using recursion)
//here instead of j we can use (n-i-1) also ... same pointer for i and j
void reverse(string &name,int i , int j){
    if(i>j){
        return ;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}

//Q(palindrome using recursion)
bool palindrome(string str,int i ,int j){
    if(i>j)
        return true ;
    
    if(str[i]!=str[j])
    return false;
    
    else{
        return palindrome(str,i+1,j-1);
    }
}

//Q(power using recursion)
int power(int a , int b){
    if(b==0){
        return 1;
    }
if(b==1){
    return a;
}
 
 int ans= power(a,b/2);
 if(b%2==0){
    return ans*ans;
 }
 else{
    return a*ans*ans;
 }
}

//Q(bubble sort using recursion)
void bubbleSort(int *arr,int n){
    if(n==1||n==0){
        return ;
    }
    for(int i=0;i<n-1;i++){
  if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
  }
    }
    bubbleSort(arr,n-1);
}

//Q(merge sort using recursion)
void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

//Q(quick sort using recursion)
int  partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int p= partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);

}

















int main (){
    //Q1
 int array[5]={3,8,10,17,1};
 cout<<"Pivot element is:"<<getPivot(array,5)<<endl;
 //Q2
 int Array[4]={10,20,30,40};
 cout<<"book allocation is:"<<allocatedBooks(Array,4,2)<<endl;
 //Q3
int arr[5]={5,6,3,9,1};
cout<<"Selection sort applied:"<<selectionSort(arr,5)<<endl;

//04
/*int arr[6]={10,1,7,6,14,9};
cout<<"bubble sort :"<<bubbleSort(arr,6)<<endl;*/

//Q5
/*int arr[7]={10,1,7,4,8,2,11};
cout<<"Insertion sort:"<<insertionSort(arr,7)<<endl;*/

//Q6
/*vector <int> v;
v.push_back(11);
v.push_back(7);
v.push_back(3);
v.push_back(12);
v.push_back(4);
vector<int>ans=reverseArray(v);
print(ans);
return 0;
}*/

//Q7
/*int arr1[5]={1,3,5,7,9};
int arr2[3]={2,4,6};
int arr3[8]={0};
merge(arr1,5,arr2,3,arr3);
print (arr3,8);
return 0;
}*/

//Q8
/*int arr[7]={0,1,0,3,0,0,12};

moveZeros(&arr);
print(arr,8);*/

//Q9

/*char namee[20];
cout<<"Enter your name:"<<endl;
cin>>namee;
cout<<"Your name is "<<namee<<endl;
int len = getLength(namee);
 cout<<"Lenght of string is:"<<len<<endl;
  reverse(namee,len);
 cout<<"Reverse of string is :"<<namee<<endl;

 cout<<"Palindrome or not :"<<checkPalindrome(namee,len)<<endl;
cout<<"Convert to lower case:"<<toLowerCase('C')<<endl;
}*/

//2D arrays
/*int arr[3][4];
cout<<"enter the array elements:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cin>>arr[row][col];
    }
}
cout<<"elements are:"<<endl;
for(int row=0;row<3;row++){
    for(int col=0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}*/

//Searching element
/*cout<<"enter the element to search :"<<endl;
int target ;
cin>>target;
if (isPresent(arr,target,3,4)){
    cout<<"element found"<<endl;
}
else{
    cout<<"not found"<<endl;
}*/

/*printSum(arr,3,4);
cout<<endl;
int ans=largestRowSum(arr,3,4);
cout<<"Maximum sum is at row index:"<<ans<<endl;
*/

//GCD 
/*int a,b;
cout<<"Enter the values of a and b:"<<endl;
cin>>a>>b;
int ans =gcd(a,b);
cout<<"The GCD of"<<a<<"&"<<b<<"is:"<<gcd(a,b)<<endl;
*/

//POINTERS

/*int x=10;
int *ptr=&x;
cout<<"address is:"<<ptr<<endl;
cout<<"value is :"<<*ptr<<endl;
cout<<"sixe of integer is:"<<sizeof(x)<<endl;
cout<<"sixe of pointer is:"<<sizeof(ptr)<<endl;
int **q = &ptr;
cout<<ptr<<endl;
cout<<q<<endl;
cout<<*ptr<<endl;
cout<<*q<<endl;
cout<<**q<<endl;
cout<<&ptr<<endl;

*ptr=*ptr+1;
cout<<*ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
*/

//POINTERS IN ARRAY 
/*int arr[10]={1,22,3,4,56,7,10,8,9,6};
cout<<arr<<endl;//name of array gives the starting address of array
cout<<&arr[0]<<endl;
cout<<&arr<<endl;
cout<<*arr<<endl;
cout<<*arr+1<<endl;
cout<<*(arr+1)<<endl;
int *ptr=&arr[0];
cout<<sizeof(arr)<<endl;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;
cout<<&arr[0]<<endl;*
cout<<&ptr<<endl; *
mapping of the address in symbol table can not be changed
arr=arr+1 will give error
ptr=ptr+1; will give the output ...shift of +4 address
*/

//POINTERS IN CHARACTER 
/*char ch[6]="abcde";//six ch is null
cout<<ch<<endl;//does not print address like array
cout<<&ch[0]<<endl;
char temp ='z';
char *p=&temp;
cout<<p;//Print everything till null character
*/
//POINTERS IN FUNCTIONS 
/*int value=10;
int *p=&value;
print(p);
cout<<"before:"<<*p<<endl;
update(p);
cout<<p<<endl;
cout<<*p<<endl;
//here is a compiler error but the concept is we can update the pointer address in function but can
//not use it in the main function .....but we can update the value of any data type and use it in main function as well
int arr[5]={1,2,3,4,5};
cout<<"sum is:"<<getsum(arr,5)<<endl;
cout<<"sum is:"<<getsum(arr+2,5)<<endl;//compiler error
*/
//DOUBLE POINTERS
/*
int i=10;
int *ptr1=&i;
int **ptr2=&ptr1;

cout<<i<<endl;
cout<<&i<<endl;
cout<<ptr1<<endl;
cout<<*ptr1<<endl;
cout<<&ptr1<<endl;
cout<<ptr2<<endl;
cout<<*ptr2<<endl;
cout<<**ptr2<<endl;
*/
/*
cout<<"before:"<<i<<endl;
cout<<"before:"<<ptr1<<endl;
cout<<"before:"<<ptr2<<endl;
update(ptr2);
cout<<"after:"<<i<<endl;
cout<<"after:"<<ptr1<<endl;
cout<<"after:"<<ptr2<<endl;
*/

//REFERENCE VARIABLES
/*
int i=5;
int &j=i;
cout<<i<<endl;
cout<<j<<endl;
i++;
cout<<i<<endl;
j++;
cout<<j<<endl;
*/
//PASS BY REFERENCE
/*
update (i);
cout<<i<<endl;
*/
//DYNAMIC MEMORY ALLOCATION
/*int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++){
   cin>>arr[i];
}
int ans=getSum(arr,n);
cout<<"Answer is:"<<ans<<endl;
return 0;
*/
//DYNAMICALLY 2D ARRAY CREATION
/*
int row;
int col;
cout<<"Enter the no. of rows and columns in a 2D array:"<<endl;
cin>>row;
cin>>col;

int **arr=new int*[row];
for(int i=0;i<row;i++){
    arr[i]=new int [col];
}
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
cin>>arr[i][j];
}
}
cout<<endl;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
cout<<arr[i][j]<<" ";
}cout<<endl;
}

//RELEASING MEMORY
for(int i=0;i<row;i++){
    delete []arr[i];
}
delete []arr;

//MACROS 
#define PI 3.14
//use:no extra storage occupy , easy to maintain code value can not be changed or updated
*/

//GLOBAL VARIABLES
/*  can be used by any function but it is a bad practice bcz anyone can
change its value 

//INLINE FUNCTIONS
inline functions reduce the function call overhead...just like macro they replace the value but
inlt if the function is of 1 or 2 lines otherwise no

//DEFAULT ARGUMENTS
If in a func an argument we want to take a default vaule if we dont give the value then 
we can specify its value in the func argument bracket as well but the condition is that
we have to specify value of the rightmost arg 1st thn to next n to next
 */

 //RECURSSION
 /*
 int start=0, end =10;
  reachHome(start,end);
  */

//finonacci series
/*
int n;
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<"Enter the number:";
cin>>n;
    sayDigit(n,arr);
return 0;
}*/

//Q
/*
int size=5;
int arr[5]={1,2,3,4,5};
bool ans= isSorted(arr,size);
if(ans){
    cout<<"array is sorted"<<endl;
}
else{
    cout<<"array is not sorted"<<endl;
}
return 0;
}*/

//Q
/*
int arr[]={3,8,5,10,2};
int size=5;
 int S=sum(arr,size);
 cout<<"Sum of array:"<<S<<endl;
return 0;
}*/

//Q(linear search using recursion)
/*
int arr[]={3,5,1,2,6};
int size=5;
int key =9;
int ans = linaerSearch(arr,size,key);
if(ans){
    cout<<"Key is present"<<endl;
}
else{
    cout<<"Key is absent"<<endl;
}
return 0;
}*/

//Q(binary search using recursion)
/*
int arr[6]={2,4,6,10,14,18};
int key;
int size=6;
cout<<"Enter the element to search:"<<endl;
cin>>key;
int ans = binarySearch(arr,0,5,key);
cout<<ans<<endl;
return 0;
}*/
//Q (reverse a string using recursion)
/*
string name="garvita dvivedi";
reverse(name,0,name.length()-1);
cout<<name<<endl;
return 0;
}*/

//Q(palindrome using recursion)
/*
string name="abbccbba";
bool ans = palindrome(name,0,name.length()-1);
if(ans){
    cout<<"Is a palindrome"<<endl;
}
else{
    cout<<"Is not a palindrome"<<endl;
}
return 0 ;
}*/

//Q(power using recursion)
/*
int a , b;
cin>>a>>b;
int ans = power(a,b);
cout<<"Answer is :"<< ans<<endl;
return 0;
}*/

//Q(bubble sort using recursion)
/*
int list[]={21,5,1,6,9};
bubbleSort(list,5);
for(int i=0;i<5;i++){
    cout<<list[i]<<" ";
}
return 0;
}*/
//Q(merge sort using recursion)
/*
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}*/

//Q(quick sort)
/*
int arr[]={19,45,33,11,0};
int n=5;
quickSort(arr,0,n-1);
for( int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}*/

