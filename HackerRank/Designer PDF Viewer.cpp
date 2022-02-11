int designerPdfViewer(vector<int> h, string word) {
    int i,max_height=0;
    for(i=0;i<word.length();i++){
        int height = h[word[i]-'a'];
        max_height = max(max_height, height);
    }
    return max_height * word.length();

}
