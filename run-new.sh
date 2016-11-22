emcc ./src/new/example.c -s WASM=1 -o ./src/new/index.html

./node_modules/http-server/bin/http-server ./src/new -o