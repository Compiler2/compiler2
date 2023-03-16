; ModuleID = 'aa.c'
source_filename = "aa.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.__va_list_tag = type { i32, i32, i8*, i8* }

@.str = private unnamed_addr constant [24 x i8] c"scanf_num = %d, i = %d\0A\00", align 1
@scanf_num = internal global i32 0, align 4
@rand_nums = internal global [1008 x i32] [i32 100, i32 100, i32 45, i32 90, i32 4, i32 70, i32 5, i32 73, i32 50, i32 7, i32 83, i32 95, i32 35, i32 78, i32 54, i32 51, i32 21, i32 21, i32 59, i32 43, i32 1, i32 37, i32 57, i32 0, i32 83, i32 88, i32 80, i32 93, i32 76, i32 7, i32 54, i32 54, i32 48, i32 10, i32 74, i32 88, i32 18, i32 87, i32 69, i32 12, i32 89, i32 97, i32 40, i32 78, i32 57, i32 97, i32 60, i32 4, i32 35, i32 27, i32 36, i32 62, i32 76, i32 94, i32 23, i32 58, i32 97, i32 0, i32 10, i32 24, i32 92, i32 71, i32 48, i32 54, i32 10, i32 2, i32 84, i32 74, i32 58, i32 76, i32 43, i32 17, i32 88, i32 65, i32 4, i32 23, i32 28, i32 15, i32 14, i32 40, i32 5, i32 91, i32 33, i32 33, i32 58, i32 51, i32 66, i32 64, i32 16, i32 7, i32 57, i32 37, i32 38, i32 7, i32 16, i32 83, i32 61, i32 39, i32 23, i32 3, i32 96, i32 92, i32 4, i32 44, i32 83, i32 36, i32 78, i32 1, i32 28, i32 65, i32 32, i32 91, i32 9, i32 54, i32 42, i32 17, i32 92, i32 9, i32 85, i32 40, i32 3, i32 62, i32 72, i32 75, i32 77, i32 71, i32 35, i32 35, i32 51, i32 64, i32 51, i32 24, i32 43, i32 14, i32 41, i32 87, i32 76, i32 53, i32 54, i32 72, i32 5, i32 87, i32 40, i32 55, i32 42, i32 12, i32 14, i32 44, i32 1, i32 62, i32 61, i32 91, i32 64, i32 67, i32 48, i32 7, i32 47, i32 79, i32 38, i32 60, i32 24, i32 54, i32 80, i32 17, i32 39, i32 0, i32 76, i32 72, i32 5, i32 96, i32 46, i32 12, i32 16, i32 44, i32 5, i32 69, i32 10, i32 70, i32 38, i32 53, i32 9, i32 8, i32 78, i32 65, i32 3, i32 97, i32 55, i32 53, i32 91, i32 16, i32 48, i32 66, i32 2, i32 26, i32 20, i32 72, i32 62, i32 20, i32 44, i32 25, i32 19, i32 33, i32 27, i32 47, i32 86, i32 36, i32 83, i32 20, i32 68, i32 47, i32 47, i32 35, i32 45, i32 48, i32 88, i32 6, i32 96, i32 75, i32 40, i32 33, i32 27, i32 21, i32 39, i32 28, i32 57, i32 52, i32 64, i32 50, i32 78, i32 43, i32 6, i32 43, i32 25, i32 45, i32 51, i32 61, i32 39, i32 3, i32 1, i32 57, i32 93, i32 51, i32 75, i32 28, i32 58, i32 40, i32 12, i32 27, i32 42, i32 30, i32 82, i32 87, i32 13, i32 16, i32 31, i32 41, i32 74, i32 78, i32 66, i32 12, i32 73, i32 37, i32 84, i32 22, i32 19, i32 75, i32 91, i32 5, i32 67, i32 54, i32 32, i32 31, i32 58, i32 75, i32 44, i32 98, i32 51, i32 55, i32 46, i32 53, i32 37, i32 77, i32 3, i32 40, i32 89, i32 34, i32 98, i32 45, i32 80, i32 97, i32 13, i32 23, i32 81, i32 41, i32 41, i32 33, i32 40, i32 9, i32 14, i32 14, i32 49, i32 51, i32 26, i32 91, i32 10, i32 60, i32 87, i32 8, i32 85, i32 98, i32 54, i32 24, i32 43, i32 33, i32 85, i32 6, i32 7, i32 23, i32 92, i32 77, i32 60, i32 81, i32 70, i32 38, i32 64, i32 3, i32 48, i32 1, i32 32, i32 27, i32 35, i32 33, i32 96, i32 53, i32 13, i32 76, i32 58, i32 48, i32 76, i32 42, i32 40, i32 58, i32 48, i32 76, i32 16, i32 31, i32 72, i32 58, i32 47, i32 40, i32 75, i32 54, i32 78, i32 32, i32 95, i32 7, i32 36, i32 87, i32 32, i32 51, i32 16, i32 66, i32 81, i32 74, i32 35, i32 90, i32 8, i32 61, i32 25, i32 68, i32 85, i32 68, i32 20, i32 54, i32 40, i32 66, i32 77, i32 2, i32 39, i32 83, i32 95, i32 71, i32 5, i32 96, i32 15, i32 53, i32 49, i32 95, i32 56, i32 11, i32 54, i32 49, i32 52, i32 87, i32 14, i32 34, i32 22, i32 45, i32 67, i32 5, i32 0, i32 89, i32 47, i32 34, i32 85, i32 39, i32 4, i32 50, i32 20, i32 92, i32 22, i32 64, i32 67, i32 54, i32 63, i32 4, i32 69, i32 20, i32 15, i32 76, i32 67, i32 83, i32 81, i32 34, i32 22, i32 55, i32 73, i32 59, i32 82, i32 2, i32 96, i32 63, i32 46, i32 23, i32 95, i32 68, i32 88, i32 54, i32 71, i32 96, i32 6, i32 78, i32 87, i32 54, i32 30, i32 46, i32 19, i32 20, i32 71, i32 89, i32 97, i32 58, i32 86, i32 51, i32 73, i32 23, i32 9, i32 12, i32 6, i32 63, i32 73, i32 9, i32 80, i32 24, i32 85, i32 94, i32 91, i32 72, i32 23, i32 30, i32 2, i32 97, i32 57, i32 33, i32 12, i32 8, i32 36, i32 82, i32 21, i32 95, i32 69, i32 0, i32 78, i32 27, i32 90, i32 13, i32 44, i32 44, i32 79, i32 35, i32 58, i32 31, i32 46, i32 1, i32 40, i32 17, i32 29, i32 74, i32 46, i32 77, i32 62, i32 75, i32 76, i32 19, i32 4, i32 54, i32 66, i32 48, i32 64, i32 10, i32 55, i32 48, i32 45, i32 98, i32 63, i32 59, i32 35, i32 60, i32 80, i32 94, i32 95, i32 76, i32 30, i32 84, i32 64, i32 17, i32 36, i32 47, i32 46, i32 89, i32 38, i32 30, i32 75, i32 79, i32 53, i32 0, i32 73, i32 52, i32 98, i32 66, i32 81, i32 39, i32 8, i32 50, i32 75, i32 57, i32 37, i32 91, i32 90, i32 43, i32 95, i32 60, i32 35, i32 4, i32 51, i32 71, i32 51, i32 78, i32 86, i32 76, i32 82, i32 18, i32 84, i32 32, i32 64, i32 36, i32 40, i32 15, i32 16, i32 20, i32 72, i32 60, i32 18, i32 84, i32 2, i32 60, i32 17, i32 78, i32 1, i32 97, i32 26, i32 7, i32 16, i32 63, i32 47, i32 65, i32 81, i32 6, i32 10, i32 38, i32 20, i32 25, i32 34, i32 98, i32 66, i32 38, i32 5, i32 78, i32 48, i32 43, i32 37, i32 75, i32 66, i32 56, i32 41, i32 45, i32 89, i32 93, i32 41, i32 85, i32 0, i32 84, i32 58, i32 28, i32 30, i32 19, i32 88, i32 35, i32 28, i32 92, i32 77, i32 95, i32 72, i32 81, i32 34, i32 87, i32 84, i32 40, i32 59, i32 12, i32 28, i32 98, i32 13, i32 75, i32 41, i32 67, i32 63, i32 71, i32 91, i32 11, i32 38, i32 92, i32 93, i32 71, i32 1, i32 30, i32 7, i32 52, i32 85, i32 6, i32 43, i32 32, i32 38, i32 17, i32 56, i32 48, i32 29, i32 5, i32 61, i32 38, i32 31, i32 17, i32 22, i32 34, i32 64, i32 97, i32 12, i32 52, i32 96, i32 7, i32 64, i32 97, i32 61, i32 62, i32 93, i32 41, i32 44, i32 97, i32 93, i32 95, i32 97, i32 80, i32 41, i32 53, i32 5, i32 29, i32 61, i32 1, i32 0, i32 70, i32 0, i32 9, i32 77, i32 24, i32 40, i32 98, i32 30, i32 18, i32 18, i32 17, i32 30, i32 95, i32 86, i32 49, i32 84, i32 27, i32 1, i32 84, i32 74, i32 11, i32 81, i32 41, i32 24, i32 23, i32 34, i32 48, i32 31, i32 44, i32 42, i32 34, i32 58, i32 61, i32 52, i32 83, i32 75, i32 63, i32 83, i32 19, i32 2, i32 21, i32 51, i32 27, i32 41, i32 33, i32 17, i32 58, i32 1, i32 28, i32 90, i32 88, i32 8, i32 40, i32 20, i32 31, i32 6, i32 38, i32 69, i32 34, i32 6, i32 87, i32 83, i32 25, i32 73, i32 40, i32 59, i32 27, i32 28, i32 76, i32 73, i32 83, i32 72, i32 76, i32 70, i32 41, i32 25, i32 68, i32 42, i32 79, i32 60, i32 45, i32 99, i32 39, i32 50, i32 21, i32 43, i32 54, i32 73, i32 75, i32 15, i32 93, i32 83, i32 44, i32 35, i32 32, i32 65, i32 68, i32 62, i32 62, i32 21, i32 96, i32 76, i32 55, i32 85, i32 98, i32 21, i32 18, i32 7, i32 18, i32 31, i32 23, i32 43, i32 17, i32 56, i32 97, i32 51, i32 56, i32 9, i32 9, i32 14, i32 23, i32 69, i32 8, i32 16, i32 77, i32 7, i32 26, i32 55, i32 82, i32 79, i32 75, i32 69, i32 17, i32 64, i32 59, i32 43, i32 95, i32 64, i32 53, i32 57, i32 36, i32 69, i32 23, i32 55, i32 59, i32 75, i32 85, i32 73, i32 37, i32 97, i32 33, i32 49, i32 65, i32 74, i32 99, i32 6, i32 61, i32 71, i32 62, i32 19, i32 10, i32 80, i32 77, i32 24, i32 59, i32 39, i32 78, i32 86, i32 13, i32 46, i32 57, i32 64, i32 93, i32 59, i32 89, i32 48, i32 38, i32 64, i32 6, i32 28, i32 57, i32 53, i32 9, i32 48, i32 98, i32 97, i32 24, i32 37, i32 37, i32 27, i32 76, i32 82, i32 25, i32 95, i32 97, i32 95, i32 17, i32 57, i32 5, i32 21, i32 51, i32 91, i32 88, i32 99, i32 0, i32 35, i32 2, i32 17, i32 28, i32 9, i32 22, i32 57, i32 51, i32 14, i32 27, i32 47, i32 49, i32 80, i32 28, i32 20, i32 75, i32 6, i32 34, i32 70, i32 81, i32 52, i32 86, i32 51, i32 5, i32 25, i32 29, i32 82, i32 63, i32 36, i32 6, i32 52, i32 31, i32 70, i32 12, i32 50, i32 86, i32 61, i32 90, i32 41, i32 41, i32 34, i32 34, i32 64, i32 89, i32 97, i32 22, i32 97, i32 52, i32 14, i32 38, i32 87, i32 66, i32 63, i32 46, i32 52, i32 89, i32 31, i32 25, i32 91, i32 22, i32 12, i32 72, i32 65, i32 1, i32 94, i32 15, i32 4, i32 34, i32 84, i32 10, i32 80, i32 25, i32 31, i32 48, i32 52, i32 40, i32 72, i32 72, i32 4, i32 42, i32 31, i32 51, i32 52, i32 87, i32 87, i32 12, i32 24, i32 91, i32 50, i32 98, i32 59, i32 83, i32 90, i32 4, i32 51, i32 78, i32 18, i32 69, i32 28, i32 7, i32 3, i32 3, i32 17, i32 45, i32 90, i32 56, i32 20, i32 41, i32 74, i32 27, i32 76, i32 41, i32 30, i32 23], align 16
@rand_nums_len = internal global i32 1008, align 4
@.str.1 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@.str.2 = private unnamed_addr constant [37 x i8] c"_________________________________ %d\00", align 1
@.str.3 = private unnamed_addr constant [5 x i8] c"\0A%d\0A\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @printf(i8* noalias %text, ...) #0 {
entry:
  %text.addr = alloca i8*, align 8
  store i8* %text, i8** %text.addr, align 8
  ret i32 0
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @set_rand() #0 {
entry:
  ret void
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @__isoc99_scanf(i8* noalias %text, ...) #0 {
entry:
  %text.addr = alloca i8*, align 8
  %types = alloca [10 x i8], align 1
  %n = alloca i32, align 4
  %i = alloca i32, align 4
  %ptr = alloca [1 x %struct.__va_list_tag], align 16
  %i13 = alloca i32, align 4
  %s = alloca i8*, align 8
  store i8* %text, i8** %text.addr, align 8
  store i32 0, i32* %n, align 4
  store i32 0, i32* %i, align 4
  br label %for.cond

for.cond:                                         ; preds = %for.inc, %entry
  %0 = load i8*, i8** %text.addr, align 8
  %1 = load i32, i32* %i, align 4
  %idxprom = sext i32 %1 to i64
  %arrayidx = getelementptr inbounds i8, i8* %0, i64 %idxprom
  %2 = load i8, i8* %arrayidx, align 1
  %conv = sext i8 %2 to i32
  %cmp = icmp ne i32 %conv, 0
  br i1 %cmp, label %for.body, label %for.end

for.body:                                         ; preds = %for.cond
  %3 = load i8*, i8** %text.addr, align 8
  %4 = load i32, i32* %i, align 4
  %idxprom2 = sext i32 %4 to i64
  %arrayidx3 = getelementptr inbounds i8, i8* %3, i64 %idxprom2
  %5 = load i8, i8* %arrayidx3, align 1
  %conv4 = sext i8 %5 to i32
  %cmp5 = icmp eq i32 %conv4, 37
  br i1 %cmp5, label %if.then, label %if.end

if.then:                                          ; preds = %for.body
  %6 = load i8*, i8** %text.addr, align 8
  %7 = load i32, i32* %i, align 4
  %add = add nsw i32 %7, 1
  %idxprom7 = sext i32 %add to i64
  %arrayidx8 = getelementptr inbounds i8, i8* %6, i64 %idxprom7
  %8 = load i8, i8* %arrayidx8, align 1
  %9 = load i32, i32* %n, align 4
  %inc = add nsw i32 %9, 1
  store i32 %inc, i32* %n, align 4
  %idxprom9 = sext i32 %9 to i64
  %arrayidx10 = getelementptr inbounds [10 x i8], [10 x i8]* %types, i64 0, i64 %idxprom9
  store i8 %8, i8* %arrayidx10, align 1
  br label %if.end

if.end:                                           ; preds = %if.then, %for.body
  br label %for.inc

for.inc:                                          ; preds = %if.end
  %10 = load i32, i32* %i, align 4
  %inc11 = add nsw i32 %10, 1
  store i32 %inc11, i32* %i, align 4
  br label %for.cond, !llvm.loop !2

for.end:                                          ; preds = %for.cond
  %arraydecay = getelementptr inbounds [1 x %struct.__va_list_tag], [1 x %struct.__va_list_tag]* %ptr, i64 0, i64 0
  %arraydecay12 = bitcast %struct.__va_list_tag* %arraydecay to i8*
  call void @llvm.va_start(i8* %arraydecay12)
  store i32 0, i32* %i13, align 4
  br label %for.cond14

for.cond14:                                       ; preds = %for.inc67, %for.end
  %11 = load i32, i32* %i13, align 4
  %12 = load i32, i32* %n, align 4
  %cmp15 = icmp slt i32 %11, %12
  br i1 %cmp15, label %for.body17, label %for.end69

for.body17:                                       ; preds = %for.cond14
  %13 = load i32, i32* @scanf_num, align 4
  %14 = load i32, i32* %i13, align 4
  %call = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @.str, i64 0, i64 0), i32 %13, i32 %14)
  %15 = load i32, i32* %i13, align 4
  %idxprom18 = sext i32 %15 to i64
  %arrayidx19 = getelementptr inbounds [10 x i8], [10 x i8]* %types, i64 0, i64 %idxprom18
  %16 = load i8, i8* %arrayidx19, align 1
  %conv20 = sext i8 %16 to i32
  %cmp21 = icmp eq i32 %conv20, 100
  br i1 %cmp21, label %if.then23, label %if.else

if.then23:                                        ; preds = %for.body17
  %17 = load i32, i32* @scanf_num, align 4
  %idxprom24 = sext i32 %17 to i64
  %arrayidx25 = getelementptr inbounds [1008 x i32], [1008 x i32]* @rand_nums, i64 0, i64 %idxprom24
  %18 = load i32, i32* %arrayidx25, align 4
  %arraydecay26 = getelementptr inbounds [1 x %struct.__va_list_tag], [1 x %struct.__va_list_tag]* %ptr, i64 0, i64 0
  %gp_offset_p = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay26, i32 0, i32 0
  %gp_offset = load i32, i32* %gp_offset_p, align 16
  %fits_in_gp = icmp ule i32 %gp_offset, 40
  br i1 %fits_in_gp, label %vaarg.in_reg, label %vaarg.in_mem

vaarg.in_reg:                                     ; preds = %if.then23
  %19 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay26, i32 0, i32 3
  %reg_save_area = load i8*, i8** %19, align 16
  %20 = getelementptr i8, i8* %reg_save_area, i32 %gp_offset
  %21 = bitcast i8* %20 to i32**
  %22 = add i32 %gp_offset, 8
  store i32 %22, i32* %gp_offset_p, align 16
  br label %vaarg.end

vaarg.in_mem:                                     ; preds = %if.then23
  %overflow_arg_area_p = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay26, i32 0, i32 2
  %overflow_arg_area = load i8*, i8** %overflow_arg_area_p, align 8
  %23 = bitcast i8* %overflow_arg_area to i32**
  %overflow_arg_area.next = getelementptr i8, i8* %overflow_arg_area, i32 8
  store i8* %overflow_arg_area.next, i8** %overflow_arg_area_p, align 8
  br label %vaarg.end

vaarg.end:                                        ; preds = %vaarg.in_mem, %vaarg.in_reg
  %vaarg.addr = phi i32** [ %21, %vaarg.in_reg ], [ %23, %vaarg.in_mem ]
  %24 = load i32*, i32** %vaarg.addr, align 8
  store i32 %18, i32* %24, align 4
  br label %if.end65

if.else:                                          ; preds = %for.body17
  %25 = load i32, i32* %i13, align 4
  %idxprom27 = sext i32 %25 to i64
  %arrayidx28 = getelementptr inbounds [10 x i8], [10 x i8]* %types, i64 0, i64 %idxprom27
  %26 = load i8, i8* %arrayidx28, align 1
  %conv29 = sext i8 %26 to i32
  %cmp30 = icmp eq i32 %conv29, 115
  br i1 %cmp30, label %if.then32, label %if.else48

if.then32:                                        ; preds = %if.else
  %arraydecay33 = getelementptr inbounds [1 x %struct.__va_list_tag], [1 x %struct.__va_list_tag]* %ptr, i64 0, i64 0
  %gp_offset_p34 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay33, i32 0, i32 0
  %gp_offset35 = load i32, i32* %gp_offset_p34, align 16
  %fits_in_gp36 = icmp ule i32 %gp_offset35, 40
  br i1 %fits_in_gp36, label %vaarg.in_reg37, label %vaarg.in_mem39

vaarg.in_reg37:                                   ; preds = %if.then32
  %27 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay33, i32 0, i32 3
  %reg_save_area38 = load i8*, i8** %27, align 16
  %28 = getelementptr i8, i8* %reg_save_area38, i32 %gp_offset35
  %29 = bitcast i8* %28 to i8**
  %30 = add i32 %gp_offset35, 8
  store i32 %30, i32* %gp_offset_p34, align 16
  br label %vaarg.end43

vaarg.in_mem39:                                   ; preds = %if.then32
  %overflow_arg_area_p40 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay33, i32 0, i32 2
  %overflow_arg_area41 = load i8*, i8** %overflow_arg_area_p40, align 8
  %31 = bitcast i8* %overflow_arg_area41 to i8**
  %overflow_arg_area.next42 = getelementptr i8, i8* %overflow_arg_area41, i32 8
  store i8* %overflow_arg_area.next42, i8** %overflow_arg_area_p40, align 8
  br label %vaarg.end43

vaarg.end43:                                      ; preds = %vaarg.in_mem39, %vaarg.in_reg37
  %vaarg.addr44 = phi i8** [ %29, %vaarg.in_reg37 ], [ %31, %vaarg.in_mem39 ]
  %32 = load i8*, i8** %vaarg.addr44, align 8
  store i8* %32, i8** %s, align 8
  %33 = load i32, i32* @scanf_num, align 4
  %idxprom45 = sext i32 %33 to i64
  %arrayidx46 = getelementptr inbounds [1008 x i32], [1008 x i32]* @rand_nums, i64 0, i64 %idxprom45
  %34 = load i32, i32* %arrayidx46, align 4
  %conv47 = trunc i32 %34 to i8
  %35 = load i8*, i8** %s, align 8
  %incdec.ptr = getelementptr inbounds i8, i8* %35, i32 1
  store i8* %incdec.ptr, i8** %s, align 8
  store i8 %conv47, i8* %35, align 1
  %36 = load i8*, i8** %s, align 8
  store i8 0, i8* %36, align 1
  br label %if.end64

if.else48:                                        ; preds = %if.else
  %37 = load i32, i32* @scanf_num, align 4
  %idxprom49 = sext i32 %37 to i64
  %arrayidx50 = getelementptr inbounds [1008 x i32], [1008 x i32]* @rand_nums, i64 0, i64 %idxprom49
  %38 = load i32, i32* %arrayidx50, align 4
  %conv51 = trunc i32 %38 to i8
  %arraydecay52 = getelementptr inbounds [1 x %struct.__va_list_tag], [1 x %struct.__va_list_tag]* %ptr, i64 0, i64 0
  %gp_offset_p53 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay52, i32 0, i32 0
  %gp_offset54 = load i32, i32* %gp_offset_p53, align 16
  %fits_in_gp55 = icmp ule i32 %gp_offset54, 40
  br i1 %fits_in_gp55, label %vaarg.in_reg56, label %vaarg.in_mem58

vaarg.in_reg56:                                   ; preds = %if.else48
  %39 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay52, i32 0, i32 3
  %reg_save_area57 = load i8*, i8** %39, align 16
  %40 = getelementptr i8, i8* %reg_save_area57, i32 %gp_offset54
  %41 = bitcast i8* %40 to i8**
  %42 = add i32 %gp_offset54, 8
  store i32 %42, i32* %gp_offset_p53, align 16
  br label %vaarg.end62

vaarg.in_mem58:                                   ; preds = %if.else48
  %overflow_arg_area_p59 = getelementptr inbounds %struct.__va_list_tag, %struct.__va_list_tag* %arraydecay52, i32 0, i32 2
  %overflow_arg_area60 = load i8*, i8** %overflow_arg_area_p59, align 8
  %43 = bitcast i8* %overflow_arg_area60 to i8**
  %overflow_arg_area.next61 = getelementptr i8, i8* %overflow_arg_area60, i32 8
  store i8* %overflow_arg_area.next61, i8** %overflow_arg_area_p59, align 8
  br label %vaarg.end62

vaarg.end62:                                      ; preds = %vaarg.in_mem58, %vaarg.in_reg56
  %vaarg.addr63 = phi i8** [ %41, %vaarg.in_reg56 ], [ %43, %vaarg.in_mem58 ]
  %44 = load i8*, i8** %vaarg.addr63, align 8
  store i8 %conv51, i8* %44, align 1
  br label %if.end64

if.end64:                                         ; preds = %vaarg.end62, %vaarg.end43
  br label %if.end65

if.end65:                                         ; preds = %if.end64, %vaarg.end
  %45 = load i32, i32* @scanf_num, align 4
  %add66 = add nsw i32 %45, 1
  %46 = load i32, i32* @rand_nums_len, align 4
  %rem = srem i32 %add66, %46
  store i32 %rem, i32* @scanf_num, align 4
  br label %for.inc67

for.inc67:                                        ; preds = %if.end65
  %47 = load i32, i32* %i13, align 4
  %inc68 = add nsw i32 %47, 1
  store i32 %inc68, i32* %i13, align 4
  br label %for.cond14, !llvm.loop !4

for.end69:                                        ; preds = %for.cond14
  %arraydecay70 = getelementptr inbounds [1 x %struct.__va_list_tag], [1 x %struct.__va_list_tag]* %ptr, i64 0, i64 0
  %arraydecay7071 = bitcast %struct.__va_list_tag* %arraydecay70 to i8*
  call void @llvm.va_end(i8* %arraydecay7071)
  ret i32 0
}

; Function Attrs: nofree nosync nounwind willreturn
declare void @llvm.va_start(i8*) #1

; Function Attrs: nofree nosync nounwind willreturn
declare void @llvm.va_end(i8*) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @getchar() #0 {
entry:
  %ch = alloca i8, align 1
  %0 = load i32, i32* @scanf_num, align 4
  %idxprom = sext i32 %0 to i64
  %arrayidx = getelementptr inbounds [1008 x i32], [1008 x i32]* @rand_nums, i64 0, i64 %idxprom
  %1 = load i32, i32* %arrayidx, align 4
  %conv = trunc i32 %1 to i8
  store i8 %conv, i8* %ch, align 1
  %2 = load i32, i32* @scanf_num, align 4
  %add = add nsw i32 %2, 1
  %3 = load i32, i32* @rand_nums_len, align 4
  %rem = srem i32 %add, %3
  store i32 %rem, i32* @scanf_num, align 4
  %4 = load i8, i8* %ch, align 1
  %conv1 = sext i8 %4 to i32
  ret i32 %conv1
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  %n = alloca i32, align 4
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %k = alloca i32, align 4
  %l = alloca i32, align 4
  %s = alloca i32, align 4
  %m = alloca i32, align 4
  %a = alloca [10000 x i32], align 16
  %p = alloca i32*, align 8
  %p1 = alloca i32*, align 8
  %p2 = alloca i32*, align 8
  %p3 = alloca i32*, align 8
  store i32 0, i32* %retval, align 4
  %call = call i32 (i8*, ...) @__isoc99_scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0), i32* %n)
  %0 = load i32, i32* %n, align 4
  %call1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @.str.2, i64 0, i64 0), i32 %0)
  %arraydecay = getelementptr inbounds [10000 x i32], [10000 x i32]* %a, i64 0, i64 0
  store i32* %arraydecay, i32** %p, align 8
  store i32 0, i32* %l, align 4
  br label %for.cond

for.cond:                                         ; preds = %for.inc89, %entry
  %1 = load i32, i32* %l, align 4
  %2 = load i32, i32* %n, align 4
  %cmp = icmp slt i32 %1, %2
  br i1 %cmp, label %for.body, label %for.end91

for.body:                                         ; preds = %for.cond
  store i32 0, i32* %i, align 4
  br label %for.cond2

for.cond2:                                        ; preds = %for.inc11, %for.body
  %3 = load i32, i32* %i, align 4
  %4 = load i32, i32* %n, align 4
  %cmp3 = icmp slt i32 %3, %4
  br i1 %cmp3, label %for.body4, label %for.end13

for.body4:                                        ; preds = %for.cond2
  %5 = load i32*, i32** %p, align 8
  %6 = load i32, i32* %i, align 4
  %mul = mul nsw i32 100, %6
  %idx.ext = sext i32 %mul to i64
  %add.ptr = getelementptr inbounds i32, i32* %5, i64 %idx.ext
  store i32* %add.ptr, i32** %p1, align 8
  store i32 0, i32* %j, align 4
  br label %for.cond5

for.cond5:                                        ; preds = %for.inc, %for.body4
  %7 = load i32, i32* %j, align 4
  %8 = load i32, i32* %n, align 4
  %cmp6 = icmp slt i32 %7, %8
  br i1 %cmp6, label %for.body7, label %for.end

for.body7:                                        ; preds = %for.cond5
  %9 = load i32*, i32** %p1, align 8
  %10 = load i32, i32* %j, align 4
  %idx.ext8 = sext i32 %10 to i64
  %add.ptr9 = getelementptr inbounds i32, i32* %9, i64 %idx.ext8
  store i32* %add.ptr9, i32** %p2, align 8
  %11 = load i32*, i32** %p2, align 8
  %call10 = call i32 (i8*, ...) @__isoc99_scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0), i32* %11)
  br label %for.inc

for.inc:                                          ; preds = %for.body7
  %12 = load i32, i32* %j, align 4
  %inc = add nsw i32 %12, 1
  store i32 %inc, i32* %j, align 4
  br label %for.cond5, !llvm.loop !5

for.end:                                          ; preds = %for.cond5
  br label %for.inc11

for.inc11:                                        ; preds = %for.end
  %13 = load i32, i32* %i, align 4
  %inc12 = add nsw i32 %13, 1
  store i32 %inc12, i32* %i, align 4
  br label %for.cond2, !llvm.loop !6

for.end13:                                        ; preds = %for.cond2
  %14 = load i32*, i32** %p2, align 8
  %call14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @.str.2, i64 0, i64 0), i32* %14)
  store i32 0, i32* %s, align 4
  store i32 0, i32* %k, align 4
  br label %for.cond15

for.cond15:                                       ; preds = %for.inc85, %for.end13
  %15 = load i32, i32* %k, align 4
  %16 = load i32, i32* %n, align 4
  %sub = sub nsw i32 %16, 1
  %cmp16 = icmp slt i32 %15, %sub
  br i1 %cmp16, label %for.body17, label %for.end87

for.body17:                                       ; preds = %for.cond15
  store i32 0, i32* %i, align 4
  br label %for.cond18

for.cond18:                                       ; preds = %for.inc45, %for.body17
  %17 = load i32, i32* %i, align 4
  %18 = load i32, i32* %n, align 4
  %cmp19 = icmp slt i32 %17, %18
  br i1 %cmp19, label %for.body20, label %for.end47

for.body20:                                       ; preds = %for.cond18
  %19 = load i32*, i32** %p, align 8
  %20 = load i32, i32* %i, align 4
  %mul21 = mul nsw i32 %20, 100
  %idx.ext22 = sext i32 %mul21 to i64
  %add.ptr23 = getelementptr inbounds i32, i32* %19, i64 %idx.ext22
  store i32* %add.ptr23, i32** %p1, align 8
  %21 = load i32*, i32** %p1, align 8
  %22 = load i32, i32* %21, align 4
  store i32 %22, i32* %m, align 4
  store i32 0, i32* %j, align 4
  br label %for.cond24

for.cond24:                                       ; preds = %for.inc33, %for.body20
  %23 = load i32, i32* %j, align 4
  %24 = load i32, i32* %n, align 4
  %cmp25 = icmp slt i32 %23, %24
  br i1 %cmp25, label %for.body26, label %for.end35

for.body26:                                       ; preds = %for.cond24
  %25 = load i32*, i32** %p1, align 8
  %26 = load i32, i32* %j, align 4
  %idx.ext27 = sext i32 %26 to i64
  %add.ptr28 = getelementptr inbounds i32, i32* %25, i64 %idx.ext27
  store i32* %add.ptr28, i32** %p2, align 8
  %27 = load i32, i32* %j, align 4
  %28 = load i32, i32* %k, align 4
  %cmp29 = icmp sgt i32 %27, %28
  br i1 %cmp29, label %if.then, label %if.end32

if.then:                                          ; preds = %for.body26
  %29 = load i32*, i32** %p2, align 8
  %30 = load i32, i32* %29, align 4
  %31 = load i32, i32* %m, align 4
  %cmp30 = icmp slt i32 %30, %31
  br i1 %cmp30, label %if.then31, label %if.end

if.then31:                                        ; preds = %if.then
  %32 = load i32*, i32** %p2, align 8
  %33 = load i32, i32* %32, align 4
  store i32 %33, i32* %m, align 4
  br label %if.end

if.end:                                           ; preds = %if.then31, %if.then
  br label %if.end32

if.end32:                                         ; preds = %if.end, %for.body26
  br label %for.inc33

for.inc33:                                        ; preds = %if.end32
  %34 = load i32, i32* %j, align 4
  %inc34 = add nsw i32 %34, 1
  store i32 %inc34, i32* %j, align 4
  br label %for.cond24, !llvm.loop !7

for.end35:                                        ; preds = %for.cond24
  store i32 0, i32* %j, align 4
  br label %for.cond36

for.cond36:                                       ; preds = %for.inc42, %for.end35
  %35 = load i32, i32* %j, align 4
  %36 = load i32, i32* %n, align 4
  %cmp37 = icmp slt i32 %35, %36
  br i1 %cmp37, label %for.body38, label %for.end44

for.body38:                                       ; preds = %for.cond36
  %37 = load i32*, i32** %p1, align 8
  %38 = load i32, i32* %j, align 4
  %idx.ext39 = sext i32 %38 to i64
  %add.ptr40 = getelementptr inbounds i32, i32* %37, i64 %idx.ext39
  store i32* %add.ptr40, i32** %p2, align 8
  %39 = load i32*, i32** %p2, align 8
  %40 = load i32, i32* %39, align 4
  %41 = load i32, i32* %m, align 4
  %sub41 = sub nsw i32 %40, %41
  %42 = load i32*, i32** %p2, align 8
  store i32 %sub41, i32* %42, align 4
  br label %for.inc42

for.inc42:                                        ; preds = %for.body38
  %43 = load i32, i32* %j, align 4
  %inc43 = add nsw i32 %43, 1
  store i32 %inc43, i32* %j, align 4
  br label %for.cond36, !llvm.loop !8

for.end44:                                        ; preds = %for.cond36
  br label %for.inc45

for.inc45:                                        ; preds = %for.end44
  %44 = load i32, i32* %i, align 4
  %inc46 = add nsw i32 %44, 1
  store i32 %inc46, i32* %i, align 4
  br label %for.cond18, !llvm.loop !9

for.end47:                                        ; preds = %for.cond18
  store i32 0, i32* %i, align 4
  br label %for.cond48

for.cond48:                                       ; preds = %for.inc78, %for.end47
  %45 = load i32, i32* %i, align 4
  %46 = load i32, i32* %n, align 4
  %cmp49 = icmp slt i32 %45, %46
  br i1 %cmp49, label %for.body50, label %for.end80

for.body50:                                       ; preds = %for.cond48
  %47 = load i32*, i32** %p, align 8
  %48 = load i32, i32* %i, align 4
  %idx.ext51 = sext i32 %48 to i64
  %add.ptr52 = getelementptr inbounds i32, i32* %47, i64 %idx.ext51
  store i32* %add.ptr52, i32** %p1, align 8
  %49 = load i32*, i32** %p1, align 8
  %50 = load i32, i32* %49, align 4
  store i32 %50, i32* %m, align 4
  store i32 0, i32* %j, align 4
  br label %for.cond53

for.cond53:                                       ; preds = %for.inc65, %for.body50
  %51 = load i32, i32* %j, align 4
  %52 = load i32, i32* %n, align 4
  %cmp54 = icmp slt i32 %51, %52
  br i1 %cmp54, label %for.body55, label %for.end67

for.body55:                                       ; preds = %for.cond53
  %53 = load i32*, i32** %p1, align 8
  %54 = load i32, i32* %j, align 4
  %mul56 = mul nsw i32 %54, 100
  %idx.ext57 = sext i32 %mul56 to i64
  %add.ptr58 = getelementptr inbounds i32, i32* %53, i64 %idx.ext57
  store i32* %add.ptr58, i32** %p2, align 8
  %55 = load i32, i32* %j, align 4
  %56 = load i32, i32* %k, align 4
  %cmp59 = icmp sgt i32 %55, %56
  br i1 %cmp59, label %if.then60, label %if.end64

if.then60:                                        ; preds = %for.body55
  %57 = load i32*, i32** %p2, align 8
  %58 = load i32, i32* %57, align 4
  %59 = load i32, i32* %m, align 4
  %cmp61 = icmp slt i32 %58, %59
  br i1 %cmp61, label %if.then62, label %if.end63

if.then62:                                        ; preds = %if.then60
  %60 = load i32*, i32** %p2, align 8
  %61 = load i32, i32* %60, align 4
  store i32 %61, i32* %m, align 4
  br label %if.end63

if.end63:                                         ; preds = %if.then62, %if.then60
  br label %if.end64

if.end64:                                         ; preds = %if.end63, %for.body55
  br label %for.inc65

for.inc65:                                        ; preds = %if.end64
  %62 = load i32, i32* %j, align 4
  %inc66 = add nsw i32 %62, 1
  store i32 %inc66, i32* %j, align 4
  br label %for.cond53, !llvm.loop !10

for.end67:                                        ; preds = %for.cond53
  store i32 0, i32* %j, align 4
  br label %for.cond68

for.cond68:                                       ; preds = %for.inc75, %for.end67
  %63 = load i32, i32* %j, align 4
  %64 = load i32, i32* %n, align 4
  %cmp69 = icmp slt i32 %63, %64
  br i1 %cmp69, label %for.body70, label %for.end77

for.body70:                                       ; preds = %for.cond68
  %65 = load i32*, i32** %p1, align 8
  %66 = load i32, i32* %j, align 4
  %mul71 = mul nsw i32 %66, 100
  %idx.ext72 = sext i32 %mul71 to i64
  %add.ptr73 = getelementptr inbounds i32, i32* %65, i64 %idx.ext72
  store i32* %add.ptr73, i32** %p2, align 8
  %67 = load i32*, i32** %p2, align 8
  %68 = load i32, i32* %67, align 4
  %69 = load i32, i32* %m, align 4
  %sub74 = sub nsw i32 %68, %69
  %70 = load i32*, i32** %p2, align 8
  store i32 %sub74, i32* %70, align 4
  br label %for.inc75

for.inc75:                                        ; preds = %for.body70
  %71 = load i32, i32* %j, align 4
  %inc76 = add nsw i32 %71, 1
  store i32 %inc76, i32* %j, align 4
  br label %for.cond68, !llvm.loop !11

for.end77:                                        ; preds = %for.cond68
  br label %for.inc78

for.inc78:                                        ; preds = %for.end77
  %72 = load i32, i32* %i, align 4
  %inc79 = add nsw i32 %72, 1
  store i32 %inc79, i32* %i, align 4
  br label %for.cond48, !llvm.loop !12

for.end80:                                        ; preds = %for.cond48
  %73 = load i32, i32* %s, align 4
  %74 = load i32*, i32** %p, align 8
  %75 = load i32, i32* %k, align 4
  %add = add nsw i32 %75, 1
  %mul81 = mul nsw i32 101, %add
  %idx.ext82 = sext i32 %mul81 to i64
  %add.ptr83 = getelementptr inbounds i32, i32* %74, i64 %idx.ext82
  %76 = load i32, i32* %add.ptr83, align 4
  %add84 = add nsw i32 %73, %76
  store i32 %add84, i32* %s, align 4
  br label %for.inc85

for.inc85:                                        ; preds = %for.end80
  %77 = load i32, i32* %k, align 4
  %inc86 = add nsw i32 %77, 1
  store i32 %inc86, i32* %k, align 4
  br label %for.cond15, !llvm.loop !13

for.end87:                                        ; preds = %for.cond15
  %78 = load i32, i32* %s, align 4
  %call88 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.3, i64 0, i64 0), i32 %78)
  br label %for.inc89

for.inc89:                                        ; preds = %for.end87
  %79 = load i32, i32* %l, align 4
  %inc90 = add nsw i32 %79, 1
  store i32 %inc90, i32* %l, align 4
  br label %for.cond, !llvm.loop !14

for.end91:                                        ; preds = %for.cond
  ret i32 0
}

attributes #0 = { noinline nounwind optnone uwtable "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nofree nosync nounwind willreturn }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 12.0.0 (https://github.com/llvm/llvm-project.git c161775decddcc86fbbfefd7485a5d0ef5842aec)"}
!2 = distinct !{!2, !3}
!3 = !{!"llvm.loop.mustprogress"}
!4 = distinct !{!4, !3}
!5 = distinct !{!5, !3}
!6 = distinct !{!6, !3}
!7 = distinct !{!7, !3}
!8 = distinct !{!8, !3}
!9 = distinct !{!9, !3}
!10 = distinct !{!10, !3}
!11 = distinct !{!11, !3}
!12 = distinct !{!12, !3}
!13 = distinct !{!13, !3}
!14 = distinct !{!14, !3}
