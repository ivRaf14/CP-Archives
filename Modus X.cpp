int n, total; 
	cin >> n;
	int arr[1000];
	
	for(int i =0; i < n; i++){
		cin >> arr[i];
	}
	int j = sizeof(arr)/sizeof(arr[0]); 
	sort(arr,arr+j);
	
int number = arr[0];
int mode = number;
int count = 1;
int countMode = 1;
for (int i=0; i< n; i++)
{
      if (arr[i] == number) 
      { // count occurrences of the current number
         ++count;
      }
      else
      { // now this is a different number
            if (count > countMode) 
            {
                  countMode = count; // mode is the biggest ocurrences
                  mode = number;
            }
           count = 1; // reset count for the new number
           number = arr[i];
  }
}
cout << mode << endl;
