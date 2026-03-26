# C Calculator Project

C 언어로 작성한 간단한 계산기 프로젝트입니다.  
기본적인 사칙연산 기능을 제공하며, GitHub Issues, Pull Request, GitHub Actions 실습 예제로 활용할 수 있습니다.

## 프로젝트 개요

이 프로젝트는 C 언어 기초 문법과 빌드 과정을 익히고,  
GitHub를 이용한 형상관리 및 협업 절차를 실습하기 위한 학습용 프로젝트입니다.

다음과 같은 목적에 적합합니다.

- C 언어 기반 프로그램 구조 이해
- 헤더 파일과 소스 파일 분리 실습
- Makefile을 이용한 빌드 실습
- GitHub Issues 등록 및 관리 실습
- Pull Request 생성 및 병합 실습
- GitHub Actions를 활용한 자동 빌드 및 테스트 실습

## 주요 기능

- 덧셈
- 뺄셈
- 곱셈
- 나눗셈
- 입력값 검증
- 0으로 나누기 예외 처리

## 프로젝트 구조

```text
c-calculator-project/
├─ src/                  # 소스 코드
├─ include/              # 헤더 파일
├─ .github/workflows/    # GitHub Actions 워크플로
├─ README.md             # 프로젝트 설명 문서
└─ Makefile              # 빌드 설정 파일