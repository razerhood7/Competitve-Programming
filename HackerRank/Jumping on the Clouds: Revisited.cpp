int jumpingOnClouds(vector<int> c, int k) {
    int current_pos =0;
    int energy = 100, n=c.size();
    current_pos=(current_pos+k)%n;
    energy = energy - 1 - (c[current_pos]==1) - (c[current_pos]==1);
    if(current_pos==0)
        return energy;
    while(current_pos!=0){
        current_pos=(current_pos+k)%n;
        energy = energy - 1 - (c[current_pos]==1) - (c[current_pos]==1);
        cout<<current_pos<<" "<<energy<<endl;
    }
    return energy;
}
