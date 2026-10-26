class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int moves=0;
        for(int i=0;i<seats.size();i++){
            while(seats[i]!=students[i]){
                if(seats[i]>students[i]){
                    students[i]++;
                    moves++;
                }
                else{
                    students[i]--;
                     moves++;
                     }
            }
            
        }
        return moves;

    }
};