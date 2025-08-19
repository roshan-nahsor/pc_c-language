int piyush() {
    // const float xyz = 5.0;
    // float* pxyz = &xyz;
    // *pxyz = 10.123;

    volatile
    int i=10;
    i=i+1;
    i=i+10;
    // return 0;
    return i;
}