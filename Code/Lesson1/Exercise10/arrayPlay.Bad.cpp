//a is the input array and Len is its length
	void arrayPlay(int *a, int Len){
		int S = 0;
		int M = 0;
		int Lim_value = 100;
		bool flag = true;
		for (int i =0; i < Len; ++i){
		S += a[i];

			if ( i == 0 || M > a[i]){
			M = a[i];
			}

			if ( a[i] >= Lim_value ){
				flag = true;
			}

			if ( a[i] < 0 ){
			a[i] *= 2;
		}
	    }
	}
