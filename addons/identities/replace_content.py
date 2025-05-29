#!/usr/bin/env python3
import re

"""
Generic replace script, edited for rvmats.
"""

import os

def main() -> None:
    for root, _, files in os.walk(os.getcwd() + "/addons/identities/chiss"):
        for file_name in files:
            if not (file_name.endswith("rvmat")):
                continue

            print(f"Editing {file_name}")
            file_path = os.path.join(root, file_name)
            file = open(file_path, "r")
            content = file.read()

            replace_keys = {
                "m_chiss1_blue": "blue1_face",
                "m_chiss1_ice": "ice1_face",
                "m_chiss1_purple": "purple1_face",
                "m_chiss2_blue": "blue2_face",
                "m_chiss2_ice": "ice2_face",
                "m_chiss2_purple": "purple2_face",
                "m_chiss3_blue": "blue3_face",
                "m_chiss3_ice": "ice3_face",
                "m_chiss3_purple": "purple3_face",
            }

            for key, value in replace_keys.items():
                content = content.replace(key, value)

            file.close()
            file = open(file_path, "w")
            file.write(content)
    print("Finished editing files")

if __name__ == "__main__":
    main()
