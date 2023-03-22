// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len; i++) {
for (int j = i+1; j < len; j++) {
if (arr[j] != arr[j+1] && arr[i] + arr[j] == value) {
count++;
}
}
}
return count;
}

int countPairs2(int *arr, int len, int value) {
int count2 = 0;
int firstIndex2 = 0;
int lastIndex2 = len-1;
while (firstIndex2 < lastIndex2) {
if (arr[lastIndex2] + arr[firstIndex2] == value) {
count2++;
lastIndex2--;
} else {
if (arr[lastIndex2] + arr[firstIndex2] < value) {
firstIndex2++;
} else {
lastIndex2--;
}
}
}
return count2;
}

int binSearch(int *arr,int secondArg,int len) {
int low, high, middle;
low = 0;
high = len - 1;
while (low <= high) {
middle = (low + high) / 2;
if (secondArg < arr[middle]) {
high = middle - 1;
} else if (secondArg > arr[middle]) {
low = middle + 1;
} else {
return arr[middle];
}
}
return 0;
}
int countPairs3(int *arr, int len, int value) {
int count3 = 0;
for (int i = 0; i < len; i++) {
if (arr[i] + binSearch(arr+i,value-arr[i],len-i) == value) {
count3++;
}
}
return count3;  
}
