#include <iostream>
#include <string>
#include <cassert>
#include <list>

using namespace std;

class Piece {
private:
    string piece_name;
    string color;
    int row;
    int column;
    int** possible_moves;
public:
    Piece();
    Piece (string piece_name, string piece_color, int row, int column) {
        this->piece_name = piece_name;
        this->color = piece_color;
        this->row = row;
        this->column = column;
    }

    void move(int row, int column) {
        this->row = row;
        this->column = column;
    }

    const string &get_name() const {
        return piece_name;
    }

    const string &get_color() const {
        return color;
    }

    int get_row() const {
        return row;
    }

    int get_column() const {
        return column;
    }

    string print() {
        string str = get_name() + " " +
                     get_color() + " " +
                     to_string(get_row()) + " " +
                     to_string(get_column()) + " ";
        return str;
    }
};

class Board {
private:
    int rows, columns;
    int** field;
    string game;
    std::list <Piece> pieces;
public:
    Board (int rows, int columns) {
        this->rows = rows;
        this->columns = columns;
        this->field = new int*[rows];
        for (int i = 0; i < columns; i++) {
            field[i] = new int[columns];
        }
    }

    void add_pieces(list<Piece> ps) {
        for (Piece p: ps) {
            pieces.push_back(p);
        }
    }

    void set_game(string name) {
        this->game = name;
    }

    string get_game() {
        return this->game;
    }

    list<Piece> get_pieces() const {
        return pieces;
    }

    void print_game() {
        for(Piece p: pieces) {
            string str = p.print();
            cout << str << endl;
        }
    }
};

int main() {
    Piece* white_pawn = new Piece("pawn", "white", 1, 1);
    Piece* white_king = new Piece("king", "white", 4, 4);
    Piece* white_queen = new Piece("queen", "white", 4, 5);
    Piece* black_king = new Piece("king", "black", 8, 8);
    list<Piece> pieces;
    pieces.push_back(*white_pawn);
    pieces.push_back(*white_queen);
    pieces.push_back(*white_king);
    pieces.push_back(*black_king);
    Board* chess = new Board(8, 8);
    chess->add_pieces(pieces);
    chess->print_game();

    free(white_pawn);
    free(white_king);
    free(white_queen);
    free(black_king);
    free(chess);
}
