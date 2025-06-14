#define MAX 5  // Kapasitas maksimum queue
struct Queue {
    int items[MAX], front, rear;

    // Menambahkan elemen ke belakang queue
    void enqueue(int value) {
        if ((rear + 1) % MAX != front) {  // Memastikan queue tidak penuh
            if (front == -1) front = 0;    // Set front saat pertama kali elemen ditambahkan
            rear = (rear + 1) % MAX;
            items[rear] = value;
        }
    }

    // Menghapus elemen dari depan queue
    void dequeue() {
        if (front != -1) {  // Memastikan queue tidak kosong
            if (front == rear) {
                front = rear = -1;  // Reset queue jika elemen terakhir dihapus
            } else {
                front = (front + 1) % MAX;
            }
        }
    }

    // Mendapatkan elemen depan queue
    int peek() const {
        return front != -1 ? items[front] : -1;
    }
};
