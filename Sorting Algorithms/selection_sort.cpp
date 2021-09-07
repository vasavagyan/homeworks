void selection_sort(int* arr, int size){
    for(int i=0; i<size-1; ++i){
        int min_i = i;
        for(int j=i+1; j<size; ++j){
            if(arr[j] < arr[min_i]){
                min_i = j;
            }
        }
        std::swap(arr[min_i], arr[i]);
    }
   
 return ;
}