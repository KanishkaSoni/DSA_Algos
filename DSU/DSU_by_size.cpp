class DisjointSet{
private:
    vector<int> size;
    vector<int> par;

public:
    DisjointSet(int n){
        size.resize(n+1, 1);
        par.resize(n+1);
        for(int i=0;i<=n;i++){
            par[i]=i;
        }
    }
    
    int findUPar(int u){
        if(par[u]==u) return u;
        return par[u]=findUPar(par[u]);
    }
    

    void unionBySize(int u, int v){
        int ulpU=findUPar(u);
        int ulpV=findUPar(v);
        if(ulpU==ulpV) return;

        if(size[ulpU] < size[ulpV]){
            par[ulpU]=ulpV;
            size[ulpV] += size[ulpU];
        }else{
            par[ulpV]=ulpU;
            size[ulpU] += size[ulpV];
        }
    }
};