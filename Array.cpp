#include <iostream>
#include <math.h>
using namespace std;

   /*cout<<"GANPATI BAPPA MORYA"<<endl;
    // data types and variables
    int a=67;
    char b='F';
    float c=23.9;
    double d = 44.955;
    bool bl=true;
    cout << a   << endl<< b <<endl<< c <<endl<< d <<endl<< bl << endl;
  int size = sizeof(d);
  cout<< size << endl;
  //type casting
  int ac = 'r';
  cout << ac << endl; // o/p acc to ascii table
  char ch = 89;
  cout<< ch <<endl;
  //if the bytes of int is > than bytes offered in char it will display the o/p with the help last bits
  unsigned int w= -434;
  cout<<w<<endl;//treating w as +ve
 // conditional statements
 //number is +ve -ve or 0
 /*int num1 , num2;
 cout<< "enter two numbers:";
 cin>>num1>>num2; //ignore spaces tabs while taking input make use of cin.get()
 if(num1>0){
  cout<<"num1 is +ve"<<endl;
 }
 else
{
  if(num1<0)
 {
  cout<<"num1 is -ve"<<endl;
 }
 else 
 {
  cout<<"num1 is zero"<<endl;
 }
}

//char in upper lower or numeric case
char ch1 ;
 cout<<"enter a character"<<endl;
 cin>>ch1;
 if (ch1>='A'&& ch<='Z'){
  cout<< "upper case"<<endl;
 }
 else if (ch1>='a' && ch1<='z'){
  cout<<"lower case"<<endl;
 }
 else if (ch1>=0 && ch1<=9) 
 {
  cout<<"it is a numeric"<<endl;
 }

 //sum of even numbers
int n1,sum=0;
cout<<"enter n numbers to be printed:"<<endl;
cin>>n1;
int i=2;
while(i<=n1){
  sum=sum+i;
  i=i+2;}
  cout<<sum<<endl;*/

//no is prime or not
/*int prime ;
cout<<"enter a number to check prime or not:"<<endl;
cin>>prime;
 int i=2;
 while (i<prime){
  if(prime%i==0){
    cout<< "not prime for:"<<i<<endl;
  }
  else{
    cout<<"prime for:"<<i<<endl;
  }
  i=i+1;
 }*/

 //patterns
 /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    cout<<"*";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
 }*/

 /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    cout<<i;
    j=j+1;
  }
  cout<<endl;
  i=i+1;
 }*/

 /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    cout<<j;
    j=j+1;
  }
  cout<<endl;
  i=i+1;
 }*/

  /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    cout<<n-j+1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

 /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 int count =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    cout<<count;
    count+=1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

  /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=i){
    cout<<"*";
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/* int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=i){
    cout<<i;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 int count =1;
 while(i<=n){
  int j=1;
  while(j<=i){
    cout<<count;
    count+=1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

 /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  int value=i ;
  while(j<=i){
   // cout<<value;
    //value+=1;
    cout<<i+j-1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  int value=i ;
  while(j<=i){
   // cout<<value;
   // value=value-1;
   cout<<i-j+1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    char ch = 'A'+i-1;
   cout<<ch;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
    char ch = 'A'+j-1;
   cout<<ch;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 char value ='A';
 while(i<=n){
  int j=1;
  while(j<=n){
    cout<<value;
    value+=1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=n){
     char ch ='A'+i+j-2;
    cout<<ch;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

 /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=i){
    char ch ='A'+i-1;
    cout<<ch;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 char start ='A';
 while(i<=n){
  int j=1;
  while(j<=i){
    cout<<start;
  start +=1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/
  
/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  while(j<=i){
     char ch ='A'+i+j-2;
    cout<<ch;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  char ch ='A'+n-i;
  while(j<=i){
    cout<<ch;
    ch+=1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/
//below code is another way to solve one of the above ques
/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int j=1;
  char ch ='A'+i-j;
  while(j<=n){
    cout<<ch;
    ch+=1;
    j=j+1;
    cout<<" ";
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int space = n-i;
  while (space){
    cout<<" ";
    space-=1;
  }
  int j=1;
  while(j<=i){
    cout<<"*";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
 }*/

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int space = n-i+1;
  while (space){
    cout<<"*";
    space-=1;
  }
  int j=1;
  while(j<=i){
    cout<<" ";
    j=j+1;
  }
  cout<<endl;
  i=i+1;
 }*/

  /*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int space = i-1;
  while (space){
    cout<<"";
    space+=1;
  }
  int j=1;
  while(j<=i){
    int star =n-i+1;
    while(star){
      cout<<"*";
    
          j=j+1;
    }
  }
  cout<<endl;
  i=i+1;
 }*/

/*
1111
 222
  33
   4
   
   1
  22
 333
4444

1234
 234
  34
  4


  1
 23 
456
78910   */

/*int n ;
 cout<<"enter number of rows:"<<endl;
 cin>>n;
 int i =1;
 while(i<=n){
  int space = n-i;
  while (space){
    cout<<" ";
    space-=1;
  }
  int j=1;
  while(j<=i){
    cout<<j;
    j=j+1;
   
  }
  int start =i-1;
  while(start){
    cout<<start; 
    start=start-1;
    
  }
  cout<<endl;
  i=i+1;
 }
 
 1234554321
 1234**4321
 123****321
 12******21
 1********1  */

//bitwise operators
/*int p = 4;
int q = 6;
cout<<"a&b:"<<(p&q)<<endl;
cout<<"a|b:"<<(p|q)<<endl;
cout<<"~a:"<<~p<<endl;
cout<<"a^b:"<<(p^q)<<endl;

// lef shift << and right shift>>
cout<<(17<<1)<<endl;
cout<<(21<<2)<<endl;
cout<<(43>>1)<<endl;
cout<<(12>>2)<<endl;*/

//post pre inrement decrement
/*int a,b=1;
 a=10;
 if(++a)
 cout<<b;
 else
 cout<<++b;
 */
/*int a= 1;
int b=2;
if(a-->0 && ++b>2){
cout<<"yes";
}
else{
  cout<<"no"<<endl;
}
cout << a<<" "<<b<<endl;
int num=3;
cout<<(25*(++num))<<endl;*/

//for loop
/*int num1=0,num2=1 ,n;
cout<<"how many terms for fibonacci series:";
cin>>n;
cout<<num1<<" "<<num2<<" ";
for (int i=1;i<=n;i++){
int next = num1+num2;
cout<<next<<" ";
num1=num2;
num2=next;
}*/

//prime number
/*int prime;
cout<<endl;
cout<<"enter a no to check prime or not:";
cin>>prime;
bool isPrime=1;
for(int i=2;i<prime;i++){
  if(prime%i==0){
    //cout<<"not a prime number.";
    isPrime=0;
    break;//if not prime in starting no need to check further
  }
}
if(isPrime==0){
  cout<<"not a prime number.";
}
else{
  cout<<" prime number.";
}*/
//continue ne neche ka part is unreachable
//scope of variables is inside the {}...outside they r not active
//operator precedence

 //Q1
 /*int num=2; //can not use continue in switch
switch (num)
{
case 1: cout<<"this is case 1."<<endl;
  break;
case 2: cout<<"this is case 2"<<endl;
 break;
default:cout<<"this is default case"<<endl;
  break;
}

//Q2
int a,b;
cout<< "enter two numbers :"<<endl;
cin>>a>>b;
char op;
cout<<"enter the operation:"<<endl;
cin>>op;
switch (op)
{
case '+':
cout<<(a+b)<<endl;
  break;
 case '-': cout<<(a-b)<<endl;
  break;
   case '*': cout<<(a*b)<<endl;
  break;
   case '/': cout<<(a/b)<<endl;
  break;
   case '%': cout<<(a%b)<<endl;
  break;
}*/

//Q3
/*int amount;
cout<<"Enter the amount in rupees:"<<endl;
cin>>amount;
int notes=0;
int whichNote=1;
switch(whichNote)
{
case 1:
 notes= amount/100;
 amount=amount-(100*notes);
 cout<<notes<<" 100 rs note required"<<endl;

  case 2:
 notes= amount/50;
 amount=amount-(50*notes);
 cout<<notes<<" 50 rs note required"<<endl;

 case 3:
 notes= amount/20;
 amount=amount-(20*notes);
 cout<<notes <<" 20 rs note required"<<endl;
 
case 4:
 notes= amount/1;
 amount=amount-(1*notes);
 cout<<notes <<" 1 rs note required"<<endl;
  
}*/
//Q4
/*int fact(int n){
   int fact =1;
   for(int i=1;i<=n;i++){
   fact=fact*i;
   }
   return fact;
}
int nCr(int n,int r){
  int nume=fact(n);
  int deno=fact(r)*fact(n-r);
return nume/deno;
}*/
//Q5
/*void Counting(int n){
  for(int i=1;i<=n;i++){
    cout<<i<<" ";
  }
  cout<<endl;
}*/

//Q6
/*bool isPrime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
    return 0;
    }
  }
  return 1;
}*/
//Q7
/*int arithSeris(int n){

    int ans = (3*n)+7;
    cout<<ans;
  }*/

//Q8
/*int getMax(int num[],int n){
  int max=INT8_MIN;
  for(int i=0;i<n;i++){
    if(num[i]>max){
      max=num[i];
    }
  }
  return max;
}
int getMin(int num[],int n){
  int mini=INT8_MAX;
  for(int i=0;i<n;i++){
    /*if(num[i]<min){
      min=num[i];
    }
 mini = min(mini,num[i]);
  }
  return mini;
}*/
/*Q9
int Sum(int arr1[],int size){
  int s=0;
  for(int i=0;i<size;i++){
    s=s+arr1[i];
  }
  return s;
}*/

//Q10(linear search)
/*bool linearSearch(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return 1;
    }
  }
 return 0;
}*/
//Q11
/*void reverseArray(int arr[],int size){
 int start=0;
 int end = size -1;
 while(start<=end){
  swap(arr[start],arr[end]);
  start++;
  end--;
 }
}
void printArray(int arr[],int n){
  for (int i=0;i<n;i++){
  cout<<arr[i]<<" ";
  }
 cout<<endl;
}*/

//Q12
/*int binarySearch(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int mid = start+(end-start)/2;
  while (start<=end){
    if(arr[mid]==key){
      return mid;
    }
    if(key>arr[mid]){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
    mid = start+(end-start)/2;
  }
  return -1;
}*/

//Q13(first n last occurence in binary search and total occurence)
/*int firstOcc(int arr[],int size,int key){
  int s=0;
  int e=size-1;
  int mid = s+(e-s)/2;
  int ans=-1;
  while(s<=e){
    if(arr[mid]==key){
  ans =mid;
  e=mid-1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
     mid = s+(e-s)/2;
  }
  return ans;
}
int lastOcc(int arr[],int size,int key){
  int s=0;
  int e=size-1;
  int mid = s+(e-s)/2;
  int ans=-1;
  while(s<=e){
    if(arr[mid]==key){
  ans =mid;
  s=mid+1;
    }
    else if(arr[mid]<key){
        s=mid+1;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
     mid = s+(e-s)/2;
  }
  return ans;
}*/

//Q14
int peakElement(int arr[],int size){
  int s=0;
  int e=size-1;
  int mid = s+(e-s)/2;
  while(s<=e){
    if(arr[mid]<arr[mid+1]){
      s=mid+1;
    }
    else{
      e=mid;
    }
     mid = s+(e-s)/2;
  }
  return s;
}



int main(){
 
 //Q4
  /*int n,r;
  cout<<"enter valur of n and r:"<<endl;
  cin>>n>>r;
  cout<<"answer of "<<n<<"C"<<r<<" is:"<<nCr(n,r)<<endl;*/

//Q5
/*int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
Counting(n);*/

//Q6
/*int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
if (isPrime(n)){
  cout<<"is a prime no"<<endl;
}
else{
cout<<"not a prime no"<<endl;
}*/
//Q7
/*int num;
cout<<"enter the number:"<<endl;
cin>>num;
arithSeris(num);*/

//pass by value**

//Q8
/*int len;
cout<<"enter the length of array"<<endl;
cin>>len;
int num[100];
cout<<"enter araay elements"<<endl;
for(int i=0;i<len;i++){
  cin>>num[i];
}
cout<<"maximum value is:"<<getMax(num,len)<<endl;
cout<<"minimum value is:"<<getMin(num,len)<<endl;
*/
/*int len;
cout<<"enter the length of array"<<endl;
cin>>len;
int array[100];
cout<<"enter the array elements:"<<endl;
for(int i=0;i<len;i++){
  cin>>array[i];
}
cout<<"sum of array elements is:"<< Sum(array,len);
*/

//Q10
 /*int key;
 int ar[10]={23,-9,0,55,-114,64,39,18,84,-34};
 cout<<"enter the element you want to search for:"<<endl;
 cin>>key;
 bool found=linearSearch(ar,10,key);
 if(found){
  cout<<"element is present."<<endl;
 }
 else{
  cout<<"element is not present."<<endl;
 }*/

//Q11
/*int a1[6]={3,6,4,7,8,2};
int a2[5]={4,3,6,8,5};
 
 reverseArray(a1,6);
 reverseArray(a2,5);

 printArray(a1,6);
 printArray(a2,5);
 */

//Q12(int binary search arr should always be monotonic)
/*int evenArray[6]={4,8,12,16,20,24};
int oddArray[5]={3,5,7,9,11};

int evenIndex=binarySearch(evenArray,6,46);
cout<<"element is present . Index of element is:"<<evenIndex<<endl;
int oddIndex=binarySearch(oddArray,5,9);
cout<<"element is present . Index of element is:"<<oddIndex<<endl;
*/

//Q13
/*int Array[10]={2,6,7,7,6,6,6,5,6,3};
cout<<"first occurence of element is:"<<firstOcc(Array,10,6)<<endl;
cout<<"Last occurence of element is:"<<lastOcc(Array,10,6)<<endl;
int in1=firstOcc(Array,10,6);
int in2=lastOcc(Array,10,6);
int totalOcc=(in2-in1)+1;//not true ans for this case bcz same element not is continuation
cout<<"total no of occurence of element is:"<<totalOcc<<endl;*/

//Q14

 int Array[10]={2,6,7,8,10,9,5,4,3,1};
 cout<<"peak element in array is:"<<peakElement(Array,10);


}






