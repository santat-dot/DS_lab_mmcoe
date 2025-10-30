// Assignment No. 07 (Part A)
// Title: Breadth First Search (BFS)
// Objective: To implement BFS on a graph
// Application: Web Crawling Simulation

#include <iostream> #include <string> using namespace std; #define MAX 10

class WebCrawlerBFS {
int adj[MAX][MAX];	// Adjacency matrix string pages[MAX];	 // Page names
int n;	// Number of pages public:
void createGraph(); void bfs(int start);
};

//
// Create Graph
//
void WebCrawlerBFS::createGraph() { cout << "Enter number of web pages: "; cin >> n;
cout << "Enter names of web pages:\n"; for (int i = 0; i < n; i++) {
cout << "Page " << i << ": "; cin >> pages[i];
}
cout << "\nEnter adjacency matrix (1 = link exists, 0 = no link):\n"; for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) { cin >> adj[i][j];
}
}
}
//
// BFS Traversal
//
void WebCrawlerBFS::bfs(int start) { int visited[MAX] = {0};
int queue[MAX];
int front = -1, rear = -1;
 
visited[start] = 1; queue[++rear] = start;
cout << "\n BFS Web Indexing Order:\n"; while (front != rear) {
int current = queue[++front];
cout << "Indexed: " << pages[current] << endl;

for (int i = 0; i < n; i++) {
if (adj[current][i] == 1 && visited[i] == 0) { queue[++rear] = i;
visited[i] = 1;
}
}
}
}
//
// Main Function
//
int main() { WebCrawlerBFS web; web.createGraph();

int start;
cout << "\nEnter starting page number (0 to " << 9 << "): "; cin >> start;

cout << "\n>>> Performing Breadth First Search (BFS) <<<\n"; web.bfs(start);

cout << "\nTraversal completed successfully "; return 0;
}
 
 
// Assignment No. 07 (Part B)
// Title: Depth First Search (DFS)
// Objective: To implement DFS on a graph
// Application: Web Crawling Simulation

#include <iostream> #include <string> using namespace std;

#define MAX 10

class WebCrawlerDFS {
int adj[MAX][MAX];	// Adjacency matrix string pages[MAX];	 // Page names
int n;	// Number of pages public:
 
void createGraph();
void dfs(int start, int visited[]);
};

//
// Create Graph
//
void WebCrawlerDFS::createGraph() { cout << "Enter number of web pages: "; cin >> n;
cout << "Enter names of web pages:\n"; for (int i = 0; i < n; i++) {
cout << "Page " << i << ": "; cin >> pages[i];
}

cout << "\nEnter adjacency matrix (1 = link exists, 0 = no link):\n"; for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) { cin >> adj[i][j];
}
}
}

//
// DFS Traversal (Recursive)
//
void WebCrawlerDFS::dfs(int start, int visited[]) { visited[start] = 1;
cout << "Indexed: " << pages[start] << endl;

for (int i = 0; i < n; i++) {
if (adj[start][i] == 1 && visited[i] == 0) { dfs(i, visited);
}
}
}

//
// Main Function
//
int main() { WebCrawlerDFS web; web.createGraph();
 
int start;
cout << "\nEnter starting page number (0 to " << 9 << "): "; cin >> start;

cout << "\n>>> Performing Depth First Search (DFS) <<<\n"; int visited[MAX] = {0};
web.dfs(start, visited);

cout << "\nTraversal completed successfully "; return 0;
}


