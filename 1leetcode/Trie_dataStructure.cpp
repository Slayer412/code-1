#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
class Trie{
	public: class TrieNode{
		public:
		map<char,TrieNode*> link;
		bool isEnd;
		TrieNode(){
			isEnd=false;
		}
	};
		TrieNode* root;
		Trie(){
			root=new TrieNode();
		}
		void insert(string word){
			TrieNode* current=root;
			for(int i=0;i<word.length();i++){
				TrieNode* node=current->link[word[i]];
				if(node==NULL){
					node=new TrieNode();
					current->link[word[i]]=node;
				}
				current=node;
			}
			current->isEnd=true;
		}
		bool search(string word){
			TrieNode* current=root;
			for(int i=0;i<word.length();i++){
				TrieNode* node=current->link[word[i]];
				if(node==NULL)
				return false;
				current=node;
			}
			return current->isEnd;
		}
		bool startWith(string prefix){
			TrieNode* current=root;
			for(int i=0;i<prefix.length();++i){
				TrieNode* node=current->link[prefix[i]];
				if(node==NULL)
				return false;
				current=node;
			}
			return true;
		}
};
int main(){
	Trie* obj=new Trie();
	obj->insert("APPLE");
	bool t=obj->search("APPLE");
	obj->insert("RAVI");
	obj->insert("KHATRI");
	cout<<obj->search("RAVI")<<" "<<t<<'\n';
}

