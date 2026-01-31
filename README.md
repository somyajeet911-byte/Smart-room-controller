# Smart Room Controller 

## Purpose
This project demonstrates the design of a simple smart room controller using a State Transition Machine (STM).  
The goal is to clearly model how user inputs (switches) control different electrical appliances in a room in a predictable and safe way.

## Project Overview
The controller is designed for a single room and can operate:
- Main light
- Bed light
- Lamp
- Fan

Only one appliance is active at a time to keep the control logic simple and easy to understand.  
The system behavior is defined using states, inputs, conditions, and actions.

## Design Approach
Before writing any firmware, the system logic was first modeled using a State Transition Machine.  
Each state represents the current condition of the room, while transitions occur based on switch inputs and power availability.

This approach helps in:
- Avoiding undefined behavior
- Making the logic easy to debug
- Clearly documenting system behavior

## State Description
- S0: All appliances OFF  
- S1: Main Light ON  
- S2: Bed Light ON  
- S3: Lamp ON  
- S4: Fan ON  

## File Description
- `main.c`  
  Contains the program entry point and the main execution loop.

- `stm.c`  
  Implements the state transition logic and controls outputs based on inputs.

- `stm.h`  
  Contains state definitions, function declarations, and shared variables.

- `STM_Table.png`  
  Visual representation of the state transition machine.


- `PCB_Layout.pdf`  
  Conceptual PCB layout for the controller hardware.
<img width="1024" height="1024" alt="PCB_Layout" src="https://github.com/user-attachments/assets/4bd51433-2c63-4528-a8e5-1649a6aa6d7a" />

- `Wiring_Diagram.pdf`  
  Wiring diagram showing appliance connections.
<img width="1024" height="1024" alt="Wiring_Diagram" src="https://github.com/user-attachments/assets/47ca2fd9-f257-4cd1-9ee7-c2c2c1ebf64e" />

## Notes
This project focuses on logic design and documentation rather than hardware fabrication.  
The code is written as structured pseudo-code and can be adapted for microcontrollers such as Arduino or ESP32.

# スマートルームコントローラ（状態遷移機械）

## 目的
本プロジェクトは、状態遷移機械（STM）を用いたスマートルームコントローラの基本設計を示すことを目的としています。  
スイッチ入力によって部屋内の電気機器を安全かつ明確に制御する仕組みを表現しています。

## プロジェクト概要
本コントローラは1つの部屋を対象とし、以下の機器を制御します。
- メイン照明
- ベッド照明
- ランプ
- ファン

制御ロジックを簡単に保つため、同時に動作する機器は1つのみとしています。  
システムの動作は、状態・入力・条件・動作によって定義されています。

## 設計方針
実装前に、システム全体の動作を状態遷移機械として設計しました。  
各状態は部屋の現在の状態を表し、スイッチ入力や電源状態に応じて遷移します。

この方法により、以下の利点があります。
- 動作の曖昧さを防止
- デバッグが容易
- システム動作を明確に文書化

## 状態一覧
- S0：すべての機器がOFF  
- S1：メイン照明 ON  
- S2：ベッド照明 ON  
- S3：ランプ ON  
- S4：ファン ON  

## ファイル構成
- `main.c`  
  プログラムのエントリポイントおよびメインループ。

- `stm.c`  
  状態遷移ロジックと出力制御を実装。

- `stm.h`  
  状態定義、関数宣言、共有変数を定義。

- `STM_Table.png`  
  状態遷移表の図。

- `PCB_Layout.pdf`  
  コントローラの概念的なPCBレイアウト。

- `Wiring_Diagram.pdf`  
  機器接続を示す配線図。

## 備考
本プロジェクトはハードウェア製作ではなく、論理設計とドキュメント化に重点を置いています。  
擬似コードは Arduino や ESP32 などのマイコンに適用可能です。
