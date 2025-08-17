struct Node{
    Node* links[26] = {nullptr};
    bool isEnd=false;

    void putLink(char key){
        links[key-'a'] = new Node();
    }

    Node* getLink(char key){
        return links[key-'a'];
    }

    void markEnd(){
        isEnd=true;
    }

    bool end(){
        return isEnd;
    }

};

class Trie{
    private:
        Node* root;
    
    public:

    Trie(){
        root = new Node();
    }
    void insert(string word) {
        Node* mover=root;
        for(auto ch:word){
            if(!mover->getLink(ch)){
                mover->putLink(ch);
            }
            mover=mover->getLink(ch);
        }
        mover->markEnd();
    }

    bool search(string word) {
        Node* mover=root;
        for(auto ch:word){
            if(!mover->getLink(ch)){
                return false;
            }
            mover=mover->getLink(ch);
        }
        return mover->end();
    }

    bool startsWith(string prefix) {
        Node* mover=root;
        for(auto ch:prefix){
            if(!mover->getLink(ch)){
                return false;
            }
            mover=mover->getLink(ch);
        }
        return true;
    }
};