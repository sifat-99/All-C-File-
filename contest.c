#include <stdio.h>

int main() {
  // Initialize the cells where Bob, Carol, and Alice are located.
  int bob_cell = 0;
  int carol_cell = 1;
  int alice_cell = 2;

  // Initialize the maximum number of cells that Bob and Carol can walk together.
  int max_cells = 0;

  // Find the shortest paths for Bob and Carol.
  int bob_path[100];
  int carol_path[100];
  int bob_path_len = find_shortest_path(bob_cell, alice_cell, bob_path);
  int carol_path_len = find_shortest_path(carol_cell, alice_cell, carol_path);

  // Iterate through the shortest paths for Bob and Carol and find the maximum number of cells that they can walk together.
  for (int i = 0; i < bob_path_len; i++) {
    for (int j = 0; j < carol_path_len; j++) {
      if (bob_path[i] == carol_path[j]) {
        max_cells++;
      }
    }
  }

  // Print the maximum number of cells that Bob and Carol can walk together.
  printf("The maximum number of cells that Bob and Carol can walk together is %d.\n", max_cells);

  return 0;
}

// This function finds the shortest path from the start cell to the end cell.
int find_shortest_path(int start_cell, int end_cell, int path[]) {
  // Initialize the visited cells array.
  int visited_cells[100];
  for (int i = 0; i < 100; i++) {
    visited_cells[i] = 0;
  }

  // Initialize the queue of cells to be visited.
  queue<int> queue;
  queue.push(start_cell);

  // Initialize the current cell.
  int current_cell = start_cell;

  // Iterate until the end cell is reached.
  while (current_cell != end_cell) {
    // Mark the current cell as visited.
    visited_cells[current_cell] = 1;

    // Add the neighboring cells of the current cell to the queue.
    for (int i = 0; i < 4; i++) {
      int neighbor_cell = current_cell + i;
      if (neighbor_cell >= 0 && neighbor_cell < 100 && !visited_cells[neighbor_cell]) {
        queue.push(neighbor_cell);
      }
    }

    // Pop the next cell from the queue.
    current_cell = queue.front();
    queue.pop();
  }

  // Add the end cell to the path.
  path[0] = end_cell;

  // Iterate backwards from the end cell to the start cell and add the cells to the path.
  for (int i = 1; i < 100; i++) {
    path[i] = current_cell - i;
    current_cell = path[i];
  }

  // Return the length of the path.
  return i;
}
