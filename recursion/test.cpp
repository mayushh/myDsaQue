// class  {
// public:
//     void helpToFindPermutation( vector<string>&a,string&s, int i){
//         if(i>=s.length()){
//             a.push_back(s);
//             return;
//         }
//         for(int k = i; k < s.length(); k++){
//             swap(s[i],s[k]);
//             helpToFindPermutation(a,s,i+1);
//             swap(s[i],s[k]);

//         }
//     }
//     bool checkInclusion(string s1, string s2) {
//         if(s1.length()>s2.length()){
//             return false;
//         }
//         vector<string>a ;
//         helpToFindPermutation(a,s1,0);
//         for(int i =0; i<a.size();i++){
//             int pos = s2.find(a[i]);
//             if (pos != string::npos){
//                 return true;
//             }
//         }
//     return false;

//     }
// };