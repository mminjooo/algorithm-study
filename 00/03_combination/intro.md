# 조합 (Combination)
- 순서 상관 없이 뽑기
- nCr = (n)! / (r)!(n-r)!
- 조합은 순열과 달리 순서가 상관 없으므로 가지가 뒤로 갈수록 줄어든다

# 방법 1: 재귀함수
- Base Case (종료): 벡터에 담긴 원소의 개수==k가 되면 결과를 출력하고 멈춘다
- Recursive Step (진행): start + 1부터 n까지 반복하며 원소를 벡터에 넣고(push_back) 재귀 호출한다
- Backtracking (복구): 벡터에서 방금 넣었던 원소를 다시 빼서(pop_back) 원복한다

# 방법 2: 중첩 for문
- r 수만큼 for문 만들기