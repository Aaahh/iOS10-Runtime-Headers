/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateActivitySummaryHistoryEnvironment : _HKBaseAchievementPredicateEnvironment {
    double  _bestAchievedBriskMinutes;
    double  _bestAchievedMoveCalories;
    double  _bestAchievedMoveGoal;
    long long  _bestConsecutiveMoveGoalsMet;
    long long  _consecutiveExerciseGoalsMet;
    long long  _consecutiveMoveGoalsMet;
    long long  _consecutiveStandGoalsMet;
    NSSet * _earnedAchievementDefinitionIdentifiers;
    _HKAchievementPredicateActivitySummaryHistoryEnvironment * _previous;
    long long  _totalDaysOfExerciseHistory;
    long long  _totalDaysOfMoveHistory;
    long long  _totalMoveGoalsMet;
}

@property (nonatomic, readonly) double bestAchievedBriskMinutes;
@property (nonatomic, readonly) double bestAchievedMoveCalories;
@property (nonatomic, readonly) double bestAchievedMoveGoal;
@property (nonatomic, readonly) long long bestConsecutiveMoveGoalsMet;
@property (nonatomic, readonly) long long consecutiveExerciseGoalsMet;
@property (nonatomic, readonly) long long consecutiveMoveGoalsMet;
@property (nonatomic, readonly) long long consecutiveStandGoalsMet;
@property (nonatomic, readonly) NSSet *earnedAchievementDefinitionIdentifiers;
@property (nonatomic, retain) _HKAchievementPredicateActivitySummaryHistoryEnvironment *previous;
@property (nonatomic, readonly) long long totalDaysOfExerciseHistory;
@property (nonatomic, readonly) long long totalDaysOfMoveHistory;
@property (nonatomic, readonly) long long totalMoveGoalsMet;

- (void).cxx_destruct;
- (double)bestAchievedBriskMinutes;
- (double)bestAchievedMoveCalories;
- (double)bestAchievedMoveGoal;
- (long long)bestConsecutiveMoveGoalsMet;
- (long long)consecutiveExerciseGoalsMet;
- (long long)consecutiveMoveGoalsMet;
- (long long)consecutiveStandGoalsMet;
- (id)earnedAchievementDefinitionIdentifiers;
- (id)previous;
- (void)setPrevious:(id)arg1;
- (long long)totalDaysOfExerciseHistory;
- (long long)totalDaysOfMoveHistory;
- (long long)totalMoveGoalsMet;

@end
