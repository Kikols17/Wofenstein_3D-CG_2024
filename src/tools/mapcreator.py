import sys


def criar_mapa(name, input, output):
    output.write("// CRIADO POR MAPCREATOR\n")
    output.write(f"void {name}(vector<shared_ptr<customGameObject>*> &gameobjects, customPlayer &player) {{\n\n")
    output.write("\t// clear vector\n")
    output.write("\tgameobjects.clear();\n\n")

    output.write("\tshared_ptr<customGameObject>* go;\n")

    character = ' '
    x = 0
    y = 0
    size = 2
    spawn_x = 0
    spawn_y = 0
    while character != '':
        character = input.read(1)

        # Xhallway
        if character == '.':
            # Xhallway (no need for rotation)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        
        # Hallway
        if character == '|':
            # Hallway (rotation 0/180)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_hallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        elif character == '-':
            # Hallway (rotation 90/270)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_hallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 90, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        
        # Wall
        if character == '#':
            # Wall (no need for rotation)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_wall( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        
        # Door
        if character == '>':
            # Door (rotation 0)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n")
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        elif character == '^':
            # Door (rotation 90)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 90, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n")
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        elif character == '<':
            # Door (rotation 180)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 180, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n")
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        elif character == '~':
            # Door (rotation 270)
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_door( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 270, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n")
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
                
        # enemy
        if character == 'e':
            # Enemy
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customNPC( ofVec3f({size}*{x}, 0.8, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f(0.7, 1.5, 0.7), ofVec3f(1.0, 0.0, 0.0), new shared_ptr<customPhysicsObject>(&player) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")
        
        if character == 'S':
            # Spawn
            spawn_x = x
            spawn_y = y
            output.write(f"\tgo = new shared_ptr<customGameObject>( new customRoom_Xhallway( ofVec3f({size}*{x}, {size}*0, {size}*{y}), ofVec3f(0, 0, 0), ofVec3f({size}, {size}, {size}) ) );\n")
            output.write("\tgameobjects.push_back(go);\n\n")

        if character == '\n':
            x = 0
            y += 1
        else:
            x += 1

    # set player position and end function
    output.write("\n\n\n\t// set player position\n")
    output.write(f"\tplayer.position = ofVec3f({size}*{spawn_x}, 0.80, {size}*{spawn_y});\n")
    output.write("}\n")






if __name__ == "__main__":
    # receber argumentos de linha de comando

    name = sys.argv[1]
    input = open(sys.argv[2], "r")
    output = open(sys.argv[3], "w")

    criar_mapa(name, input, output)

    input.close()
    output.close()

