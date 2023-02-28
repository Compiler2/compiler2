; ModuleID = '/dev/shm/compiler_gym_dx4/s/0223T155654-691657-972d/benchmark.bc'
source_filename = "/dev/shm/compiler_gym_dx4/s/0223T155654-691657-972d/benchmark.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@.str.1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @fun(i32 %0, i32 %1) #0 !dbg !8 {
  %3 = alloca i32, align 4, !dbg !40
  call void @llvm.dbg.value(metadata i32* %3, metadata !11, metadata !DIExpression()), !dbg !40
  %4 = alloca i32, align 4, !dbg !41
  call void @llvm.dbg.value(metadata i32* %4, metadata !13, metadata !DIExpression()), !dbg !41
  %5 = alloca i32, align 4, !dbg !42
  call void @llvm.dbg.value(metadata i32* %5, metadata !14, metadata !DIExpression()), !dbg !42
  %6 = alloca i32, align 4, !dbg !43
  call void @llvm.dbg.value(metadata i32* %6, metadata !15, metadata !DIExpression()), !dbg !43
  store i32 %0, i32* %3, align 4, !dbg !44
  store i32 %1, i32* %4, align 4, !dbg !45
  store i32 0, i32* %6, align 4, !dbg !46
  %7 = load i32, i32* %3, align 4, !dbg !47
  call void @llvm.dbg.value(metadata i32 %7, metadata !16, metadata !DIExpression()), !dbg !47
  store i32 %7, i32* %5, align 4, !dbg !48
  br label %8, !dbg !49

8:                                                ; preds = %30, %2
  %9 = load i32, i32* %5, align 4, !dbg !50
  call void @llvm.dbg.value(metadata i32 %9, metadata !18, metadata !DIExpression()), !dbg !50
  %10 = load i32, i32* %5, align 4, !dbg !51
  call void @llvm.dbg.value(metadata i32 %10, metadata !19, metadata !DIExpression()), !dbg !51
  %11 = mul nsw i32 %9, %10, !dbg !52
  call void @llvm.dbg.value(metadata i32 %11, metadata !20, metadata !DIExpression()), !dbg !52
  %12 = load i32, i32* %4, align 4, !dbg !53
  call void @llvm.dbg.value(metadata i32 %12, metadata !21, metadata !DIExpression()), !dbg !53
  %13 = icmp sle i32 %11, %12, !dbg !54
  call void @llvm.dbg.value(metadata i1 %13, metadata !22, metadata !DIExpression()), !dbg !54
  br i1 %13, label %14, label %33, !dbg !55

14:                                               ; preds = %8
  %15 = load i32, i32* %4, align 4, !dbg !56
  call void @llvm.dbg.value(metadata i32 %15, metadata !24, metadata !DIExpression()), !dbg !56
  %16 = load i32, i32* %5, align 4, !dbg !57
  call void @llvm.dbg.value(metadata i32 %16, metadata !25, metadata !DIExpression()), !dbg !57
  %17 = srem i32 %15, %16, !dbg !58
  call void @llvm.dbg.value(metadata i32 %17, metadata !26, metadata !DIExpression()), !dbg !58
  %18 = icmp eq i32 %17, 0, !dbg !59
  call void @llvm.dbg.value(metadata i1 %18, metadata !27, metadata !DIExpression()), !dbg !59
  br i1 %18, label %19, label %29, !dbg !60

19:                                               ; preds = %14
  %20 = load i32, i32* %6, align 4, !dbg !61
  call void @llvm.dbg.value(metadata i32 %20, metadata !28, metadata !DIExpression()), !dbg !61
  %21 = add nsw i32 %20, 1, !dbg !62
  call void @llvm.dbg.value(metadata i32 %21, metadata !29, metadata !DIExpression()), !dbg !62
  store i32 %21, i32* %6, align 4, !dbg !63
  %22 = load i32, i32* %5, align 4, !dbg !64
  call void @llvm.dbg.value(metadata i32 %22, metadata !30, metadata !DIExpression()), !dbg !64
  %23 = load i32, i32* %4, align 4, !dbg !65
  call void @llvm.dbg.value(metadata i32 %23, metadata !31, metadata !DIExpression()), !dbg !65
  %24 = load i32, i32* %5, align 4, !dbg !66
  call void @llvm.dbg.value(metadata i32 %24, metadata !32, metadata !DIExpression()), !dbg !66
  %25 = sdiv i32 %23, %24, !dbg !67
  call void @llvm.dbg.value(metadata i32 %25, metadata !33, metadata !DIExpression()), !dbg !67
  %26 = call i32 @fun(i32 %22, i32 %25), !dbg !68
  call void @llvm.dbg.value(metadata i32 %26, metadata !34, metadata !DIExpression()), !dbg !68
  %27 = load i32, i32* %6, align 4, !dbg !69
  call void @llvm.dbg.value(metadata i32 %27, metadata !35, metadata !DIExpression()), !dbg !69
  %28 = add nsw i32 %27, %26, !dbg !70
  call void @llvm.dbg.value(metadata i32 %28, metadata !36, metadata !DIExpression()), !dbg !70
  store i32 %28, i32* %6, align 4, !dbg !71
  br label %29, !dbg !72

29:                                               ; preds = %19, %14
  br label %30, !dbg !73

30:                                               ; preds = %29
  %31 = load i32, i32* %5, align 4, !dbg !74
  call void @llvm.dbg.value(metadata i32 %31, metadata !37, metadata !DIExpression()), !dbg !74
  %32 = add nsw i32 %31, 1, !dbg !75
  call void @llvm.dbg.value(metadata i32 %32, metadata !38, metadata !DIExpression()), !dbg !75
  store i32 %32, i32* %5, align 4, !dbg !76
  br label %8, !dbg !77

33:                                               ; preds = %8
  %34 = load i32, i32* %6, align 4, !dbg !78
  call void @llvm.dbg.value(metadata i32 %34, metadata !39, metadata !DIExpression()), !dbg !78
  ret i32 %34, !dbg !79
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 !dbg !80 {
  %1 = alloca i32, align 4, !dbg !98
  call void @llvm.dbg.value(metadata i32* %1, metadata !82, metadata !DIExpression()), !dbg !98
  %2 = alloca i32, align 4, !dbg !99
  call void @llvm.dbg.value(metadata i32* %2, metadata !83, metadata !DIExpression()), !dbg !99
  %3 = alloca i32, align 4, !dbg !100
  call void @llvm.dbg.value(metadata i32* %3, metadata !84, metadata !DIExpression()), !dbg !100
  %4 = alloca i32, align 4, !dbg !101
  call void @llvm.dbg.value(metadata i32* %4, metadata !85, metadata !DIExpression()), !dbg !101
  store i32 0, i32* %1, align 4, !dbg !102
  %5 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32* %2), !dbg !103
  call void @llvm.dbg.value(metadata i32 %5, metadata !86, metadata !DIExpression()), !dbg !103
  br label %6, !dbg !104

6:                                                ; preds = %9, %0
  %7 = load i32, i32* %2, align 4, !dbg !105
  call void @llvm.dbg.value(metadata i32 %7, metadata !87, metadata !DIExpression()), !dbg !105
  %8 = icmp sgt i32 %7, 0, !dbg !106
  call void @llvm.dbg.value(metadata i1 %8, metadata !88, metadata !DIExpression()), !dbg !106
  br i1 %8, label %9, label %19, !dbg !107

9:                                                ; preds = %6
  %10 = load i32, i32* %2, align 4, !dbg !108
  call void @llvm.dbg.value(metadata i32 %10, metadata !89, metadata !DIExpression()), !dbg !108
  %11 = add nsw i32 %10, -1, !dbg !109
  call void @llvm.dbg.value(metadata i32 %11, metadata !90, metadata !DIExpression()), !dbg !109
  store i32 %11, i32* %2, align 4, !dbg !110
  %12 = call i32 (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32* %3), !dbg !111
  call void @llvm.dbg.value(metadata i32 %12, metadata !91, metadata !DIExpression()), !dbg !111
  store i32 1, i32* %4, align 4, !dbg !112
  %13 = load i32, i32* %3, align 4, !dbg !113
  call void @llvm.dbg.value(metadata i32 %13, metadata !92, metadata !DIExpression()), !dbg !113
  %14 = call i32 @fun(i32 2, i32 %13), !dbg !114
  call void @llvm.dbg.value(metadata i32 %14, metadata !93, metadata !DIExpression()), !dbg !114
  %15 = load i32, i32* %4, align 4, !dbg !115
  call void @llvm.dbg.value(metadata i32 %15, metadata !94, metadata !DIExpression()), !dbg !115
  %16 = add nsw i32 %15, %14, !dbg !116
  call void @llvm.dbg.value(metadata i32 %16, metadata !95, metadata !DIExpression()), !dbg !116
  store i32 %16, i32* %4, align 4, !dbg !117
  %17 = load i32, i32* %4, align 4, !dbg !118
  call void @llvm.dbg.value(metadata i32 %17, metadata !96, metadata !DIExpression()), !dbg !118
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %17), !dbg !119
  call void @llvm.dbg.value(metadata i32 %18, metadata !97, metadata !DIExpression()), !dbg !119
  br label %6, !dbg !120

19:                                               ; preds = %6
  ret i32 0, !dbg !121
}

declare dso_local i32 @scanf(i8*, ...) #1

declare dso_local i32 @printf(i8*, ...) #1

; Function Attrs: nounwind readnone speculatable willreturn
declare void @llvm.dbg.value(metadata, metadata, metadata) #2

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nounwind readnone speculatable willreturn }

!llvm.module.flags = !{!0, !1}
!llvm.ident = !{!2}
!llvm.dbg.cu = !{!3}
!llvm.debugify = !{!6, !7}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 2, !"Debug Info Version", i32 3}
!2 = !{!"clang version 10.0.0 "}
!3 = distinct !DICompileUnit(language: DW_LANG_C, file: !4, producer: "debugify", isOptimized: true, runtimeVersion: 0, emissionKind: FullDebug, enums: !5)
!4 = !DIFile(filename: "/dev/shm/compiler_gym_dx4/s/0223T155654-691657-972d/benchmark.ll", directory: "/")
!5 = !{}
!6 = !{i32 64}
!7 = !{i32 42}
!8 = distinct !DISubprogram(name: "fun", linkageName: "fun", scope: null, file: !4, line: 1, type: !9, scopeLine: 1, spFlags: DISPFlagDefinition | DISPFlagOptimized, unit: !3, retainedNodes: !10)
!9 = !DISubroutineType(types: !5)
!10 = !{!11, !13, !14, !15, !16, !18, !19, !20, !21, !22, !24, !25, !26, !27, !28, !29, !30, !31, !32, !33, !34, !35, !36, !37, !38, !39}
!11 = !DILocalVariable(name: "1", scope: !8, file: !4, line: 1, type: !12)
!12 = !DIBasicType(name: "ty64", size: 64, encoding: DW_ATE_unsigned)
!13 = !DILocalVariable(name: "2", scope: !8, file: !4, line: 2, type: !12)
!14 = !DILocalVariable(name: "3", scope: !8, file: !4, line: 3, type: !12)
!15 = !DILocalVariable(name: "4", scope: !8, file: !4, line: 4, type: !12)
!16 = !DILocalVariable(name: "5", scope: !8, file: !4, line: 8, type: !17)
!17 = !DIBasicType(name: "ty32", size: 32, encoding: DW_ATE_unsigned)
!18 = !DILocalVariable(name: "6", scope: !8, file: !4, line: 11, type: !17)
!19 = !DILocalVariable(name: "7", scope: !8, file: !4, line: 12, type: !17)
!20 = !DILocalVariable(name: "8", scope: !8, file: !4, line: 13, type: !17)
!21 = !DILocalVariable(name: "9", scope: !8, file: !4, line: 14, type: !17)
!22 = !DILocalVariable(name: "10", scope: !8, file: !4, line: 15, type: !23)
!23 = !DIBasicType(name: "ty8", size: 8, encoding: DW_ATE_unsigned)
!24 = !DILocalVariable(name: "11", scope: !8, file: !4, line: 17, type: !17)
!25 = !DILocalVariable(name: "12", scope: !8, file: !4, line: 18, type: !17)
!26 = !DILocalVariable(name: "13", scope: !8, file: !4, line: 19, type: !17)
!27 = !DILocalVariable(name: "14", scope: !8, file: !4, line: 20, type: !23)
!28 = !DILocalVariable(name: "15", scope: !8, file: !4, line: 22, type: !17)
!29 = !DILocalVariable(name: "16", scope: !8, file: !4, line: 23, type: !17)
!30 = !DILocalVariable(name: "17", scope: !8, file: !4, line: 25, type: !17)
!31 = !DILocalVariable(name: "18", scope: !8, file: !4, line: 26, type: !17)
!32 = !DILocalVariable(name: "19", scope: !8, file: !4, line: 27, type: !17)
!33 = !DILocalVariable(name: "20", scope: !8, file: !4, line: 28, type: !17)
!34 = !DILocalVariable(name: "21", scope: !8, file: !4, line: 29, type: !17)
!35 = !DILocalVariable(name: "22", scope: !8, file: !4, line: 30, type: !17)
!36 = !DILocalVariable(name: "23", scope: !8, file: !4, line: 31, type: !17)
!37 = !DILocalVariable(name: "24", scope: !8, file: !4, line: 35, type: !17)
!38 = !DILocalVariable(name: "25", scope: !8, file: !4, line: 36, type: !17)
!39 = !DILocalVariable(name: "26", scope: !8, file: !4, line: 39, type: !17)
!40 = !DILocation(line: 1, column: 1, scope: !8)
!41 = !DILocation(line: 2, column: 1, scope: !8)
!42 = !DILocation(line: 3, column: 1, scope: !8)
!43 = !DILocation(line: 4, column: 1, scope: !8)
!44 = !DILocation(line: 5, column: 1, scope: !8)
!45 = !DILocation(line: 6, column: 1, scope: !8)
!46 = !DILocation(line: 7, column: 1, scope: !8)
!47 = !DILocation(line: 8, column: 1, scope: !8)
!48 = !DILocation(line: 9, column: 1, scope: !8)
!49 = !DILocation(line: 10, column: 1, scope: !8)
!50 = !DILocation(line: 11, column: 1, scope: !8)
!51 = !DILocation(line: 12, column: 1, scope: !8)
!52 = !DILocation(line: 13, column: 1, scope: !8)
!53 = !DILocation(line: 14, column: 1, scope: !8)
!54 = !DILocation(line: 15, column: 1, scope: !8)
!55 = !DILocation(line: 16, column: 1, scope: !8)
!56 = !DILocation(line: 17, column: 1, scope: !8)
!57 = !DILocation(line: 18, column: 1, scope: !8)
!58 = !DILocation(line: 19, column: 1, scope: !8)
!59 = !DILocation(line: 20, column: 1, scope: !8)
!60 = !DILocation(line: 21, column: 1, scope: !8)
!61 = !DILocation(line: 22, column: 1, scope: !8)
!62 = !DILocation(line: 23, column: 1, scope: !8)
!63 = !DILocation(line: 24, column: 1, scope: !8)
!64 = !DILocation(line: 25, column: 1, scope: !8)
!65 = !DILocation(line: 26, column: 1, scope: !8)
!66 = !DILocation(line: 27, column: 1, scope: !8)
!67 = !DILocation(line: 28, column: 1, scope: !8)
!68 = !DILocation(line: 29, column: 1, scope: !8)
!69 = !DILocation(line: 30, column: 1, scope: !8)
!70 = !DILocation(line: 31, column: 1, scope: !8)
!71 = !DILocation(line: 32, column: 1, scope: !8)
!72 = !DILocation(line: 33, column: 1, scope: !8)
!73 = !DILocation(line: 34, column: 1, scope: !8)
!74 = !DILocation(line: 35, column: 1, scope: !8)
!75 = !DILocation(line: 36, column: 1, scope: !8)
!76 = !DILocation(line: 37, column: 1, scope: !8)
!77 = !DILocation(line: 38, column: 1, scope: !8)
!78 = !DILocation(line: 39, column: 1, scope: !8)
!79 = !DILocation(line: 40, column: 1, scope: !8)
!80 = distinct !DISubprogram(name: "main", linkageName: "main", scope: null, file: !4, line: 41, type: !9, scopeLine: 41, spFlags: DISPFlagDefinition | DISPFlagOptimized, unit: !3, retainedNodes: !81)
!81 = !{!82, !83, !84, !85, !86, !87, !88, !89, !90, !91, !92, !93, !94, !95, !96, !97}
!82 = !DILocalVariable(name: "27", scope: !80, file: !4, line: 41, type: !12)
!83 = !DILocalVariable(name: "28", scope: !80, file: !4, line: 42, type: !12)
!84 = !DILocalVariable(name: "29", scope: !80, file: !4, line: 43, type: !12)
!85 = !DILocalVariable(name: "30", scope: !80, file: !4, line: 44, type: !12)
!86 = !DILocalVariable(name: "31", scope: !80, file: !4, line: 46, type: !17)
!87 = !DILocalVariable(name: "32", scope: !80, file: !4, line: 48, type: !17)
!88 = !DILocalVariable(name: "33", scope: !80, file: !4, line: 49, type: !23)
!89 = !DILocalVariable(name: "34", scope: !80, file: !4, line: 51, type: !17)
!90 = !DILocalVariable(name: "35", scope: !80, file: !4, line: 52, type: !17)
!91 = !DILocalVariable(name: "36", scope: !80, file: !4, line: 54, type: !17)
!92 = !DILocalVariable(name: "37", scope: !80, file: !4, line: 56, type: !17)
!93 = !DILocalVariable(name: "38", scope: !80, file: !4, line: 57, type: !17)
!94 = !DILocalVariable(name: "39", scope: !80, file: !4, line: 58, type: !17)
!95 = !DILocalVariable(name: "40", scope: !80, file: !4, line: 59, type: !17)
!96 = !DILocalVariable(name: "41", scope: !80, file: !4, line: 61, type: !17)
!97 = !DILocalVariable(name: "42", scope: !80, file: !4, line: 62, type: !17)
!98 = !DILocation(line: 41, column: 1, scope: !80)
!99 = !DILocation(line: 42, column: 1, scope: !80)
!100 = !DILocation(line: 43, column: 1, scope: !80)
!101 = !DILocation(line: 44, column: 1, scope: !80)
!102 = !DILocation(line: 45, column: 1, scope: !80)
!103 = !DILocation(line: 46, column: 1, scope: !80)
!104 = !DILocation(line: 47, column: 1, scope: !80)
!105 = !DILocation(line: 48, column: 1, scope: !80)
!106 = !DILocation(line: 49, column: 1, scope: !80)
!107 = !DILocation(line: 50, column: 1, scope: !80)
!108 = !DILocation(line: 51, column: 1, scope: !80)
!109 = !DILocation(line: 52, column: 1, scope: !80)
!110 = !DILocation(line: 53, column: 1, scope: !80)
!111 = !DILocation(line: 54, column: 1, scope: !80)
!112 = !DILocation(line: 55, column: 1, scope: !80)
!113 = !DILocation(line: 56, column: 1, scope: !80)
!114 = !DILocation(line: 57, column: 1, scope: !80)
!115 = !DILocation(line: 58, column: 1, scope: !80)
!116 = !DILocation(line: 59, column: 1, scope: !80)
!117 = !DILocation(line: 60, column: 1, scope: !80)
!118 = !DILocation(line: 61, column: 1, scope: !80)
!119 = !DILocation(line: 62, column: 1, scope: !80)
!120 = !DILocation(line: 63, column: 1, scope: !80)
!121 = !DILocation(line: 64, column: 1, scope: !80)
