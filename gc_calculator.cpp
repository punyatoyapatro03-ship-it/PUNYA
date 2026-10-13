#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
string seq = "ATGCGATCGATCGATCGAATTCG"; 
int gc_count = 0; 
for (char base : seq) { 
if (base == 'G' || base == 'C') { 
} 
if (base != 'A' && base != 'T' && base != 'G' && base != 'C') { 
} 
cerr << "Warning: Non-canonical DNA character detected: " << base << endl; 
gc_count++; 
} 
double gc_percentage = (static_cast<double> (gc_count) / seq.length()) cout << "Sequence: << seq << endl; 
"1 
cout << "GC Content: << gc_percentage << "%" << endl; 
cout << "Total Sequence Length: " << seq.length() << " bp" << endl; 
return 0; 
