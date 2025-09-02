int getSecondLargest(int *arr, int n) {
    // code here
    int maximumElement = INT_MIN;
    int secondLargestElement = INT_MIN;
    for (int i = 0; i < n; i++){
        int currentElement = arr[i];
        if (currentElement>maximumElement){
            maximumElement = currentElement;
        }
    }
    for (int i = 0; i < n; i++){
        int currentElement = arr[i];
        if (currentElement < maximumElement && currentElement > secondLargestElement){
            secondLargestElement = currentElement;
        }
    }
    if (secondLargestElement == INT_MIN){
        return -1;
    }
    return secondLargestElement;
}