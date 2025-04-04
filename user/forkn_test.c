int main() {
    int pids[10];
    int res = forkn(3, pids);
    if (res == 0) {
      printf("Parent here! Created: %d children\n", 3);
    } else {
      printf("Child number %d here!\n", res);
    }
    exit(0, "");
  }