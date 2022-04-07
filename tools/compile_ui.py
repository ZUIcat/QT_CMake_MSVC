import os
import sys
import pathlib

def compile_ui(ui_path_str: str, ui_root_path_str: str, gen_root_path_str: str) -> pathlib.Path:
    """
    三个参数分别为：ui 文件的路径，ui 根文件的路径，生成代码的根路径。
    """

    ui_path = pathlib.Path(ui_path_str)
    ui_root_path = pathlib.Path(ui_root_path_str)
    gen_root_path = pathlib.Path(gen_root_path_str)
    ui_gen_path = gen_root_path.joinpath(gen_root_path, ui_path.relative_to(ui_root_path).with_name(f"ui_{ui_path.stem}.h"))
    os.makedirs(ui_gen_path.parent, exist_ok=True)
    os.system(f"uic {ui_path} -o {ui_gen_path}")
    return ui_gen_path


def main():
    print("===Compile UI Start===")
    if len(sys.argv) == 4:
        for i in sys.argv[1:]:
            print(i)
        print(compile_ui(sys.argv[1], sys.argv[2], sys.argv[3]))
    else:
        print("Nothing to do.")
    print("===Compile UI End===")


if __name__ == "__main__":
    main()
