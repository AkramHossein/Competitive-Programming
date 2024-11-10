#include<bits/stdc++.h>
#define Loop(n) for(int i=0 ;i<n ;i++) // for loop 
#define Loop_J(n) for(int j=0 ;j<n ;j++) // for loop
#define Loop_from(m , n) for(int i=m ;i<n ;i++) // for loop n to m
#define R_Loop(n) for(int i=n-1 ;i>=0 ;i--) // reverse for loop
#define Sort_str(Name) sort(Name.begin(), Name.end()) // sort string small to big
#define Sort_arr_S_B(Name , size) sort(Name, Name + size) // Small to big
#define Sort_arr_B_S(name , size) sort(name, name + size , greater<int>()) // Big to small
#define Str_spase(Name) getline(cin, Name) // String with spase
#define Str_add(name, add_indx, letter) (name).insert((add_indx), 1, (letter)) // Add at index i
#define Str_erase(name , erase_index) (name).erase(erase_index, 1); // Remove from index i
#define Sort_vec_S_B(Name) sort(Name.begin(), Name.end()) // Sort vector small to big
#define Sort_vec_B_S(Name) sort(Name.rbegin(), Name.rend()) // Sort vector big to small
//  Container ...
#define Lop_con_In(name) for(auto it=name.begin(); it!=name.end(); it++)
#define Lop_con_Out(name) for(auto (it) : name)
#define Find_str(name, valu) name.find(valu)
#define Find_vec(name, valu) find(name.begin(), name.end(), valu)
//  vector<int> name(size) ;
/*
    name.size() ;  returns the number of elements in the container.
    name.push_back() ;  adds an element to the end of the container.
    name.pop_back(value) ;  removes the last element from the container.
    name.insert(position, value) ;  adds an element or a range of elements at a specified position in the container.
    name.clear() ; Removes all elements from the container, making it empty.
    name.front() ; Accesses the first element of the container.
    name.back() ; Accesses the last element of the container.
    name.erase(position) ;|| name.erase(start, end) ; Removes elements from the container based on position or range.
    name.resize(new_size, value) ; || name.resize(new_size) ; adding values if the new size is larger or removing elements if smaller.
    name.find(value) ; Finds the position of element
    auto it = find(name.begin(), name.end(), valu) ; for vector Finds the position of element
    name.assign(count, value) ; Assigns new values to the container.Replaces all elements.
    name.swap(other_container_name) ; Swaps the contents of two containers.
    name.at(position) ; Accesses the element at a specific position, with bounds checking.
    name.compare(other_name) ; Compares the container with another string or vector.
    name.substr(position, length) ; Returns a substring from a specified position and length.
    accumulate(container.begin(), container.end(), initial_value) ; Sums up all elements in a container
	to_string(name) ; Convert to string using to_string
    unique (name.begin() , name.end()) - name.begin(); it will give the length of the unique string
    // To swap k elements starting from index 0:
    swap_ranges(a.begin(), a.begin() + k, b.begin());
    swap_ranges(a.begin() + 5, a.begin() + 5 + k, b.begin() + 5);
    swap(a[i], b[b]);
*/
using namespace std ;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m , x , count = 0 ;
    cin >> n >> m ;
    x = 5 - m ;
    int arr[n] ;
    Loop(n){
        cin >> arr[i] ;
        if(arr[i]<=x){
            count++ ;
        }
    }
    cout << count/3 << "\n";
    
    
    return 0 ;
}