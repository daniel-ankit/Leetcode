struct Node{
  Node *a[26];
	bool flag;
};
class Trie {
public:
	Node* root;
	Trie() {
		root = new Node();
	}

	void insert(string word) {
		Node* p = root;
		for(int i=0;i<word.length();++i){
			if(p->a[word[i]-97]==NULL){
				p->a[word[i]-97] = new Node();
			}
			p = p->a[word[i]-97];
		}
		p->flag = true;
	}

	bool search(string word) {
		Node* p = root;
		for(int i=0;i<word.length() && p!=NULL;++i){
			if(p->a[word[i]-97]==NULL){
				return false;
			}
			p = p->a[word[i]-97];
		}
		return p->flag;
	}

	bool startsWith(string prefix) {
		Node* p = root;
		for(int i=0;i<prefix.length() && p!=NULL;++i){
			if(!p->a[prefix[i]-97]){
				return false;
			}
			p = p->a[prefix[i]-97];
		}
		return true;
	}
};