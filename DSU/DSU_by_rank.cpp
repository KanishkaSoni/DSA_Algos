class DisjointSet{
private:
    vector<int> rank;
    vector<int> par;

public:
    DisjointSet(int n){
        rank.resize(n+1, 0);
        par.resize(n+1);
        for(int i=0;i<=n;i++){
            par[i]=i;
        }
    }
    
    int findUPar(int u){
        if(par[u]==u) return u;
        return par[u]=findUPar(par[u]);
    }

    void unionByRank(int u, int v){
        int ulpU=findUPar(u);
        int ulpV=findUPar(v);
        if(ulpU == ulpV) return;
        if(rank[ulpU] < rank[ulpV]){
            par[ulpU] = ulpV;
        }else if(rank[ulpU] > rank[ulpV]){
            par[ulpV] = ulpU;
        }else{
            par[ulpV] = ulpU;
            rank[ulpU]++;
        }
    }
};

