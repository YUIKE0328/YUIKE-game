#include "raylib.h"

int main() {
    // 画面サイズ（幅800、高さ600）とタイトルを指定して初期化
    InitWindow(800, 600, "YUIKE-game");
    SetTargetFPS(60);

    // ゲームループ（ウィンドウのXボタンやEscキーが押されるまでループ）
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE); // 背景を白にクリア

        // 画面に文字を描画 (文字列, X座標, Y座標, 文字サイズ, 色)
        DrawText("Hello, it's YUIKE-game!", 190, 200, 32, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow(); // 終了処理
    return 0;
}

