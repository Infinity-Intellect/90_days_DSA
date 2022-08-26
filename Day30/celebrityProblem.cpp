/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	// Write your code here.
    
    int c;
    for(int i=0;i<n;i++) {
        if(knows(c, i)) {
             c = i;
        }
    }
    
    for(int i=0;i<n;i++) {
        if(c != i && (knows(c,i) || !knows(i,c))) {
            return -1;
        }
    }
    return c;
}
