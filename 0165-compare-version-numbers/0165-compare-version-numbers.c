int compareVersion(char* version1, char* version2) {
    int i = 0, j = 0;

    while (version1[i] != '\0' || version2[j] != '\0') {
        long num1 = 0, num2 = 0;

        // Parse revision from version1
        while (version1[i] != '\0' && version1[i] != '.') {
            num1 = num1 * 10 + (version1[i] - '0');
            i++;
        }

        // Parse revision from version2
        while (version2[j] != '\0' && version2[j] != '.') {
            num2 = num2 * 10 + (version2[j] - '0');
            j++;
        }

        // Compare revisions
        if (num1 < num2) return -1;
        if (num1 > num2) return 1;

        // Skip dots
        if (version1[i] == '.') i++;
        if (version2[j] == '.') j++;
    }

    return 0;
}
