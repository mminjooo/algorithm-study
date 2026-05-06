# 알고리즘 공부를 위한 Git & GitHub 가이드

코드트리의 자동화 시스템을 벗어나, **VS Code에서 직접 관리하는 나만의 학습 저장소** 구축 및 문제 해결 기록입니다.

---

## 1. 온라인 저장소(Repository) 만들기
1. **GitHub** 접속 및 로그인
2. 상단 **[New]** 버튼 클릭
   - **Repository name**: `algorithm-study`
   - **Visibility**: `Public`
3. **[Create repository]** 클릭 후 생성된 주소 복사
   - `https://github.com/mminjooo/algorithm-study.git`

---

## 2. 컴퓨터와 깃 연결하기 (최초 1회)
VS Code 터미널에서 아래 명령어를 순서대로 입력하여 로컬 폴더와 원격 저장소를 연결합니다.

```
# 현재 폴더를 Git 저장소로 초기화
git init

# GitHub 레포지토리 주소 연결
git remote add origin https://github.com/mminjooo/algorithm-study.git
```

---

## 3. 학습 기록 업로드 (Push 하기)
매일 공부가 끝나면 아래 3단계를 수행하여 업로드합니다.

### ① 장바구니 담기 (Add)
원하는 파일만 선택하여 스테이징 영역에 올립니다.
```
git add 폴더명/파일명.cpp
```

### ② 이름표 달기 (Commit)
수행한 작업에 대한 짧은 메모를 남깁니다.
```
git commit -m "feat: 알고리즘 주제 이름"
```

### ③ 진짜 전송하기 (Push)
GitHub 서버로 데이터를 보냅니다.
```
git push -u origin main
```

---

## Issue: 에러 및 문제 해결 기록

### 1. 브랜치 이름 불일치 에러
- **문제**: `error: src refspec main does not match any` 발생
- **원인**: 로컬의 기본 브랜치명(`master`)과 GitHub의 브랜치명(`main`)이 달라서 발생
- **해결**: 로컬 브랜치 이름을 `main`으로 강제 변경
  ```
  git branch -M main
  ```

### 2. 인증 실패 (로그인 문제)
- **문제**: `remote: Invalid username or token` 발생
- **원인**: 보안 정책상 일반 비밀번호 대신 토큰(Token) 사용 필요
- **해결**:
  - GitHub **Settings > Developer settings > Tokens (classic)**에서 토큰 생성
  - 권한 설정 시 **`repo`** 체크 필수
  - 로그인 창에 생성된 **`ghp_...`로 시작하는 토큰** 입력

---

## 유용한 팁
- **파일 상태**: 🟢초록색(`U`)은 신규 파일(Untracked), ⚪흰색은 반영 완료 상태
- **자동 제외**: `.exe` 파일이나 설정 폴더는 `.gitignore` 파일을 생성해 관리 대상에서 제외 권장